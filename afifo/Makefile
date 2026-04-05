ROOT_DIR:=$(shell dirname $(realpath $(firstword $(MAKEFILE_LIST))))

PATTERN = AFIFO

# Global parameters
DSIZE = 8
ASIZE = 8

all:
	make clean
	make set_parameters
	make lint_dut
	make lint_tb
	make verilator
	make synth_yosys
	make synth_vivado

set_parameters:
	sed -i 's/parameter DSIZE.*=.*[0-9],/parameter DSIZE = $(DSIZE),/' rtl/${PATTERN}.sv
	sed -i 's/parameter ASIZE.*=.*[0-9],/parameter ASIZE = $(ASIZE),/' rtl/${PATTERN}.sv
	sed -i 's/parameter DSIZE.*=.*[0-9]/parameter DSIZE = $(DSIZE)/'   rtl/${PATTERN}.sv
	sed -i 's/parameter ASIZE.*=.*[0-9]/parameter ASIZE = $(ASIZE)/'   rtl/${PATTERN}.sv

verilator:
	verilator --binary --trace --assert --no-stop-fail rtl/*.sv dv/*.sv --top ${PATTERN}_tb -j `nproc`
	./obj_dir/V${PATTERN}_tb 
	gtkwave ${PATTERN:=.vcd} &

lint_tb:
	verilator --lint-only -Wall --timing -I./rtl/ dv/${PATTERN}_tb.sv

lint_dut:
	verilator --lint-only -Wall --timing -I./rtl/ ${PATTERN}.sv

synth_yosys:
	make set_parameters
	mkdir -p reports
	yosys \
		-p "read_verilog -sv -formal rtl/$(PATTERN).sv" \
		-p "hierarchy -check -top $(PATTERN) -libdir ./rtl -chparam ASIZE $(ASIZE) -chparam DSIZE $(DSIZE)" \
		-p "prep -top $(PATTERN)" \
		-p "tee -o ./reports/$(PATTERN)_utilization_synth_yosys.rpt stat" \
		-p "flatten" \
		-p "show -prefix $(PATTERN) -notitle -colors 2 -width -format png"
	xdg-open $(PATTERN).png &

synth_vivado:
	make set_parameters
	mkdir -p reports  
	mkdir -p $(PATTERN)
	realpath rtl/*.sv > filelist.f
	cd $(PATTERN); vivado -mode batch -source $(ROOT_DIR)/synth.tcl; cd -;
	find . -wholename "*/project_1.runs/synth_1/$(PATTERN)_utilization_synth.rpt" -exec cp '{}' $(ROOT_DIR)/reports/$(PATTERN)_utilization_synth_vivado.rpt \;

clean:
	rm -rf *.dot *.png *.vvp *.vcd ./obj_dir ./$(PATTERN) filelist.f ./reports

.PHONY: all