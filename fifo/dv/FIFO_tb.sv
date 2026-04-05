`timescale 1ns / 1ps

module FIFO_tb;

// Test Constants
localparam PERIOD = 10;
localparam DSIZE = 32;
localparam ASIZE = 4;

// Test Signals
logic clk = 0;             
logic rst_n = 1;           
logic wr_inc = 0;     
logic rd_inc = 0;      
logic [DSIZE-1 : 0] wr_data_i = 0;
logic [DSIZE-1 : 0] rd_data_o; 
logic wr_full_o;            
logic rd_empty_o;

// DUT
FIFO #(.DSIZE(DSIZE), .ASIZE(ASIZE)) u_fifo(.*);

// Dump VCD
initial begin
  $dumpfile("FIFO.vcd");
	$dumpvars(0, FIFO_tb);
end

// Clock Generation
always begin
  #(PERIOD/2); 
  clk <= ~clk; 
end

// Test Scenario
initial begin
    // Initial reset
    rst_n = ~rst_n;
    #(2.2*PERIOD);
    // Sync clock
    @(posedge(clk));

    rst_n = ~rst_n;
    #PERIOD;
    
    // Write Until Full
    for(int i = 1; (i <= 2**ASIZE) && !wr_full_o; ++i) begin
        wr_data_i = i;
        wr_inc    = 1'b1;
        #PERIOD;
    end
    wr_inc = 1'b0;
    #PERIOD;
    
    assert (wr_full_o == 1'b1) $display("%c[1;32m[PASSED]%c[0m FIFO full.", 8'd27, 8'd27);
    else $error("%c[1;31m[FAILED]%c[0m FIFO was expected to be full but it is not.", 8'd27, 8'd27);
    
    // Read unless rd_empty_o
    for(int i = 1; (i <= 2**ASIZE) && !rd_empty_o; ++i) begin
      // To avoid race, sample at the midle of transition
      @(negedge(clk));     

      assert (rd_data_o == i) $display("%c[1;32m[PASSED]%c[0m Read data is same as written data.", 8'd27, 8'd27);
      else $error("%c[1;31m[FAILED]%c[0m Read data was 0x%0h, but it is expected to be 0x%0h.", 8'd27, 8'd27, rd_data_o, i);
      
      rd_inc = 1'b1;
      #PERIOD;  
    end
    rd_inc = 1'b0;
    #PERIOD;  
    
    assert (rd_empty_o == 1'b1) $display("%c[1;32m[PASSED]%c[0m FIFO empty.", 8'd27, 8'd27);
    else $error("%c[1;31m[FAILED]%c[0m FIFO was expected to be empty but it is not.", 8'd27, 8'd27);
    
    @(posedge(clk));  // Synchronize again
    
    // Write and Read at the same time while rd_empty_o
    wr_data_i = 32'hBABA;
    wr_inc    = 1'b1;
    rd_inc    = 1'b1;
    #PERIOD;
    wr_inc    = 1'b0;
    rd_inc    = 1'b0;
    #PERIOD;
    
    wr_data_i = 32'hABCD;
    wr_inc    = 1'b1;
    rd_inc    = 1'b1;
    #PERIOD;
    wr_inc    = 1'b0;
    rd_inc    = 1'b0;
    #PERIOD;
    
    assert (rd_empty_o == 1'b0) $display("%c[1;32m[PASSED]%c[0m FIFO was not empty.", 8'd27, 8'd27);
    else $error("%c[1;31m[FAILED]%c[0m FIFO was empty but it should't be.", 8'd27, 8'd27);
    
    // rst_n Again
    rst_n = ~rst_n;
    #PERIOD;
    rst_n = ~rst_n;
    
    // Fill completely
    for(int i = 0; (i < 2**ASIZE) && !wr_full_o; ++i) begin
        wr_data_i = i;
        wr_inc    = 1'b1;
        #PERIOD;
    end
    wr_inc = 1'b0;
    #PERIOD;
    
    assert (wr_full_o == 1'b1) $display("%c[1;32m[PASSED]%c[0m FIFO full.", 8'd27, 8'd27);
    else $error("%c[1;31m[FAILED]%c[0m FIFO was expected to be full but it is not.", 8'd27, 8'd27);
        
    // Write and Read at the same time while wr_full_o
    wr_data_i = 32'hAA;
    wr_inc    = 1'b1;
    rd_inc    = 1'b1;
    #PERIOD;
    wr_inc    = 1'b0;
    rd_inc    = 1'b0;
    #PERIOD;
    
    wr_data_i = 32'hBB;
    wr_inc    = 1'b1;
    rd_inc    = 1'b1;
    #PERIOD;
    wr_inc    = 1'b0;
    rd_inc    = 1'b0;
    #PERIOD;
    
    assert (wr_full_o == 1'b0) $display("%c[1;32m[PASSED]%c[0m FIFO is not full.", 8'd27, 8'd27);
    else $error("%c[1;31m[FAILED]%c[0m FIFO was full but is shouldn't be.", 8'd27, 8'd27);
        
    $finish;
end

endmodule
