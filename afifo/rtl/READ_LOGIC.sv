`timescale 1ns / 1ps
module READ_LOGIC #(
    parameter ASIZE = 4
)(
    input rd_inc, rd_clk, rd_rst_n,
    input [ASIZE:0] r2_wr_ptr,
    output reg [ASIZE:0] rd_ptr,
    output reg rd_empty_o,
    output reg [ASIZE-1:0] rd_addr
);

    reg [ASIZE:0] rd_bin;
    wire [ASIZE:0] rd_gray1, rd_bin1;
    wire rd_empty_val;
    
    assign rd_addr = rd_bin[ASIZE-1:0];
    assign rd_bin1 = rd_bin + ({(ASIZE+1){rd_inc}} & { (ASIZE+1){~rd_empty_o} });

    assign rd_gray1 = (rd_bin1>>1) ^ rd_bin1;
    assign rd_empty_val = (rd_gray1 == r2_wr_ptr);
    
    always @(posedge rd_clk or negedge rd_rst_n) begin	
	if (!rd_rst_n) begin
	   rd_bin <= 0;
	   rd_ptr <= 0;
	end else begin
	   rd_bin <= rd_bin1;	//rd bin je prosirena adresa, binarni br
	   rd_ptr <= rd_gray1;	//ptr ide kao Gray brojac
	  end
    end
    
    
    always @(posedge rd_clk or negedge rd_rst_n) begin
	if (!rd_rst_n) begin
	    rd_empty_o <= 1'b1;
	end else begin
            rd_empty_o <= rd_empty_val;
        end
    end

endmodule
