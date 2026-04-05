`timescale 1ns / 1ps
module SYNC_WR_RD #(
    parameter ASIZE = 4
)(
    input [ASIZE:0] wr_ptr, 
    input rd_clk, rd_rst_n,
    output reg [ASIZE:0] r2_wr_ptr
);

    reg [ASIZE:0] r1_wr_ptr;
    
    always @(posedge rd_clk or negedge rd_rst_n) begin
    	if (!rd_rst_n) begin
    		r2_wr_ptr <= 0;
    		r1_wr_ptr <= 0;
    	end else begin
    		r2_wr_ptr <= r1_wr_ptr;
    		r1_wr_ptr <= wr_ptr;
    	end
    	
    end 


endmodule
