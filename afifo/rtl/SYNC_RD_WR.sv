`timescale 1ns / 1ps
module SYNC_RD_WR #(
    parameter ASIZE = 4
)(
    input [ASIZE:0] rd_ptr, 
    input wr_clk, wr_rst_n,
    output reg [ASIZE:0] w2_rd_ptr
);

    reg [ASIZE:0] w1_rd_ptr;
    
    always @(posedge wr_clk or negedge wr_rst_n) begin
    	if (!wr_rst_n) begin
    		w2_rd_ptr <= 0;
    		w1_rd_ptr <= 0;
    	end else begin
    		w2_rd_ptr <= w1_rd_ptr;
    		w1_rd_ptr <= rd_ptr; 		//vodi racuna ovo je kao pipeline 2 ff!!!
    	end
    	
    end 


endmodule
