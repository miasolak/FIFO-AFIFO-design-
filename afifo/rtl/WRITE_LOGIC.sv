`timescale 1ns / 1ps
module WRITE_LOGIC #(
    parameter ASIZE = 4
)(
    input [ASIZE:0] w2_rd_ptr,
    input wr_inc, wr_clk, wr_rst_n,
    output reg [ASIZE:0] wr_ptr,
    output [ASIZE-1:0] wr_addr,
    output reg wr_full_o
);

    reg [ASIZE:0] wr_bin;
    wire [ASIZE:0] wr_gray1, wr_bin1;
    wire wr_full_val;
    
    always @(posedge wr_clk or negedge wr_rst_n) begin
    	if (!wr_rst_n) begin
    		wr_bin <= 0;
    		wr_ptr <= 0;
    	end else begin
    		wr_bin <= wr_bin1;
    		wr_ptr <= wr_gray1;    	
    	end
     end
    assign wr_addr = wr_bin[ASIZE-1:0]; 
    assign wr_bin1 = wr_bin + ({(ASIZE+1){wr_inc}} & { (ASIZE+1){~wr_full_o} });
    assign wr_gray1 = (wr_bin1 >> 1) ^ wr_bin1; //da li ovde moze bez assign nego sve u always????
    
    assign wr_full_val = ((wr_gray1[ASIZE]!= w2_rd_ptr[ASIZE] ) && (wr_gray1[ASIZE-1] != w2_rd_ptr[ASIZE-1]) && (wr_gray1[ASIZE-2:0]== w2_rd_ptr[ASIZE-2:0]));
    
    always @(posedge wr_clk or negedge wr_rst_n) begin
    	if (!wr_rst_n) begin
    		wr_full_o <= 1'b0;    	
    	end else begin
    		wr_full_o <= wr_full_val;
    	
    	end
    
    end
   
   
   endmodule

