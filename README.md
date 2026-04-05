# fifo_test
Jednostavan testbench za FIFO i AFIFO bafere.

## Organizacija
Vas kod za FIFO je potrebno staviti u folder [fifo/rtl](./fifo/rtl/).
RTL kod za AFIFO je potrebno staviti u folder [afifo/rtl](./afifo/rtl/).

Jednostavan testbenc za FIFO se nalazi [ovde](./fifo/dv/FIFO_tb.sv), dok se za AFIFO nalazi [ovde](./afifo/dv/AFIFO_tb.sv)

## Simulacije, linter i sinteza

- Za Verilator linter pokrenuti:
```bash
$ make lint_tb  # za TB kao top modul
$ make lint_dut # za DUT kao top modul
```

- Za simulaciju pomocu Verilator-a pokrenuti:
```bash
$ make verilator
```

- Za genericku sitezu pomocu yosys-a pokrenuti:
```bash
$ make synth_yosys
```

- Za sitezu pomocu vivado-a pokrenuti:
```bash
$ make synth_vivado
```

- Za pokretanje svega odjednom mozete pokrenuti:
```bash
$ make all
```