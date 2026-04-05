`timescale 1ns / 1ps
module AFIFO_MEM #(
    parameter DSIZE = 32,
    parameter ASIZE = 4
)(
    input wr_clk, wr_inc, wr_full_o,
    input [DSIZE-1:0] wr_data_i, 
    output [DSIZE-1:0] rd_data_o,  // pazi da nemas reg ako je assignovano
    input [ASIZE-1:0] wr_addr, rd_addr
);
	// AFIFO Memory
    reg [DSIZE-1:0] mem [0:2**ASIZE-1];
    
    always @(posedge wr_clk) begin	
	    if (wr_inc && !wr_full_o) begin
	    	mem[wr_addr] <= wr_data_i;
	    end
	  end
    assign rd_data_o = mem[rd_addr];
endmodule
