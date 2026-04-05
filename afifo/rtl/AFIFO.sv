`timescale 1ns / 1ps

module AFIFO #(
    parameter DSIZE = 32,
    parameter ASIZE = 4
)(
    output [DSIZE-1:0] rd_data_o,
    output             wr_full_o,
    output             rd_empty_o,
    input  [DSIZE-1:0] wr_data_i,
    input              wr_inc, wr_clk, wr_rst_n,
    input              rd_inc, rd_clk, rd_rst_n
);

    wire [ASIZE-1:0] wr_addr, rd_addr;
    wire [ASIZE:0]   wr_ptr, rd_ptr, w2_rd_ptr, r2_wr_ptr;

    // Synchronization modules
    	SYNC_RD_WR SYNC_RD_WR (
        .w2_rd_ptr (w2_rd_ptr),
        .rd_ptr    (rd_ptr),
        .wr_clk    (wr_clk),
        .wr_rst_n  (wr_rst_n)
    );

    SYNC_WR_RD SYNC_WR_RD (
        .r2_wr_ptr (r2_wr_ptr),
        .wr_ptr    (wr_ptr),
        .rd_clk    (rd_clk),
        .rd_rst_n  (rd_rst_n)
    );

    // FIFO memory
    AFIFO_MEM #(DSIZE, ASIZE) AFIFO_MEM (
        .rd_data_o (rd_data_o),
        .wr_data_i (wr_data_i),
        .wr_addr   (wr_addr),
        .rd_addr   (rd_addr),
        .wr_inc  (wr_inc),   
        .wr_full_o (wr_full_o),
        .wr_clk    (wr_clk)
    );

    // Read pointer logic
    READ_LOGIC #(
    	ASIZE
    )READ_LOGIC (
        .rd_empty_o (rd_empty_o),
        .rd_addr    (rd_addr),
        .rd_ptr     (rd_ptr),
        .r2_wr_ptr  (r2_wr_ptr),
        .rd_inc     (rd_inc),
        .rd_clk     (rd_clk),
        .rd_rst_n   (rd_rst_n)
    );

    // Write pointer logic
    WRITE_LOGIC WRITE_LOGIC (
        .wr_full_o (wr_full_o),
        .wr_addr   (wr_addr),
        .wr_ptr    (wr_ptr),
        .w2_rd_ptr (w2_rd_ptr),
        .wr_inc    (wr_inc),
        .wr_clk    (wr_clk),
        .wr_rst_n  (wr_rst_n)
    );

endmodule

