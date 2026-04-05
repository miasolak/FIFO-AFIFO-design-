`timescale 1ns / 1ps

module AFIFO_tb;

// Test Constants
localparam WR_PERIOD = 10;
localparam RD_PERIOD = 16;
localparam DSIZE = 16;
localparam ASIZE = 4;

// Test Signals
logic wr_clk   = 0;
logic rd_clk   = 0;
logic wr_rst_n = 1;
logic rd_rst_n = 1; 
logic wr_inc   = 0;     
logic rd_inc   = 0;      
logic [DSIZE-1 : 0] wr_data_i = 0;
logic [DSIZE-1 : 0] rd_data_o; 
logic wr_full_o;            
logic rd_empty_o;

logic [DSIZE-1 : 0] queue_temp [$:(1<<ASIZE - 1)];
logic [DSIZE-1 : 0] temp_wr_data;
logic [DSIZE-1 : 0] temp_rd_data;

// DUT
AFIFO #(.DSIZE(DSIZE), .ASIZE(ASIZE)) u_fifo(.*);

//  _   _      _                    __                  _   _                 
// | | | | ___| |_ __   ___ _ __   / _|_   _ _ __   ___| |_(_) ___  _ __  ___ 
// | |_| |/ _ \ | '_ \ / _ \ '__| | |_| | | | '_ \ / __| __| |/ _ \| '_ \/ __|
// |  _  |  __/ | |_) |  __/ |    |  _| |_| | | | | (__| |_| | (_) | | | \__ \
// |_| |_|\___|_| .__/ \___|_|    |_|  \__,_|_| |_|\___|\__|_|\___/|_| |_|___/
//              |_|                                                           

// Write to fifo
task automatic single_write_and_read_fifo();

  fork 
    begin
      @(posedge(wr_clk));
      temp_wr_data = DSIZE'($urandom_range((1<<DSIZE) - 1, 0));
      queue_temp.push_front(temp_wr_data);
      wr_data_i = temp_wr_data;
      wr_inc = 1'b1;
      #WR_PERIOD;
      wr_inc = 1'b0;
    end

    begin
      @(negedge(rd_clk));
      if(rd_empty_o == 0) begin
        temp_rd_data = queue_temp.pop_back();
        assert (rd_data_o == temp_rd_data) $display("%c[1;32m[PASSED]%c[0m Read data is same as written data.", 8'd27, 8'd27);
        else $error("%c[1;31m[FAILED]%c[0m Read data was 0x%0h, but it is expected to be 0x%0h.", 8'd27, 8'd27, rd_data_o, temp_rd_data);
        rd_inc = 1'b1;
        #RD_PERIOD;
        rd_inc = 1'b0;
      end
    end
  join

endtask

// Dump VCD
initial begin
  $dumpfile("AFIFO.vcd");
	$dumpvars(0, AFIFO_tb);
end

// Clock Generation
always begin
  #(WR_PERIOD/2); 
  wr_clk <= ~wr_clk; 
end
always begin
  #(RD_PERIOD/2); 
  rd_clk <= ~rd_clk; 
end

// Test Scenario
initial begin
  
  fork
    begin
      // Initial reset
      rd_rst_n = ~rd_rst_n;
      #(3.2*RD_PERIOD);
      // Sync clock
      @(posedge(rd_clk));
      rd_rst_n = ~rd_rst_n;
    end

    begin
      // Initial reset
      wr_rst_n = ~wr_rst_n;
      #(2.2*WR_PERIOD);
      // Sync clock
      @(posedge(wr_clk));
      wr_rst_n = ~wr_rst_n;
    end
  join

    #WR_PERIOD;
    #RD_PERIOD;

    // Write Until Full
    for(int i = 1; (i <= 2**ASIZE) && !wr_full_o; ++i) begin
        wr_data_i = DSIZE'(i);
        wr_inc    = 1'b1;
        #WR_PERIOD;
    end
    wr_inc = 1'b0;
    #WR_PERIOD;
    
    assert (wr_full_o == 1'b1) $display("%c[1;32m[PASSED]%c[0m FIFO full.", 8'd27, 8'd27);
    else $error("%c[1;31m[FAILED]%c[0m FIFO was expected to be full but it is not.", 8'd27, 8'd27);
    
    // Read unless rd_empty_o
    for(int i = 1; (i <= 2**ASIZE) && !rd_empty_o; ++i) begin
      // To avoid race, sample at the midle of transition
      @(negedge(rd_clk));     

      assert (rd_data_o == DSIZE'(i)) $display("%c[1;32m[PASSED]%c[0m Read data is same as written data.", 8'd27, 8'd27);
      else $error("%c[1;31m[FAILED]%c[0m Read data was 0x%0h, but it is expected to be 0x%0h.", 8'd27, 8'd27, rd_data_o, i);

      rd_inc = 1'b1;
      #RD_PERIOD;  
    end
    rd_inc = 1'b0;
    #RD_PERIOD;  
    
    assert (rd_empty_o == 1'b1) $display("%c[1;32m[PASSED]%c[0m FIFO empty.", 8'd27, 8'd27);
    else $error("%c[1;31m[FAILED]%c[0m FIFO was expected to be empty but it is not.", 8'd27, 8'd27);
    
    // single read and write
    for (int i = 0; i <= (1<<ASIZE)*2; i++)
      single_write_and_read_fifo();
        
    $finish;
end

endmodule
