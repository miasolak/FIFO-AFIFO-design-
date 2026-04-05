`timescale 1ns / 1ps
module FIFO #(
    parameter DSIZE = 32,
    parameter ASIZE = 4
)(
    input clk, rst_n,
    input [DSIZE-1:0] wr_data_i,
    input wr_inc,  // Request to write
    input rd_inc,  // Request to read
    output reg [DSIZE-1:0] rd_data_o,
    output reg wr_full_o,
    output reg rd_empty_o
);

    // FIFO Memory
    reg [DSIZE-1:0] mem [0:2**ASIZE-1];

    // Extra bit to track wrap-around
    reg [ASIZE:0] wr_ptr;			
    reg [ASIZE:0] rd_ptr;
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            wr_ptr <= 0;
            rd_ptr <= 0;
        end else begin
            // Writing logic - Only if FIFO is NOT full
            if (wr_inc && !wr_full_o) begin
                mem[wr_ptr[ASIZE-1:0]] <= wr_data_i;
                wr_ptr <= wr_ptr + 1;
            end

            // Reading logic - Only if FIFO is NOT empty
            if (rd_inc && !rd_empty_o) begin
                rd_ptr <= rd_ptr + 1;
            end
        end
    end
    
    // Update full and empty flags
    assign wr_full_o  = ((wr_ptr[ASIZE] != rd_ptr[ASIZE]) && (wr_ptr[ASIZE-1:0] == rd_ptr[ASIZE-1:0]));
    assign rd_empty_o = (wr_ptr == rd_ptr);
    assign rd_data_o = mem[rd_ptr[ASIZE-1:0]];
    
endmodule


