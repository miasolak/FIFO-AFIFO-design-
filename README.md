# FIFO and Asynchronous FIFO Design

This repository contains implementations and verification files for a synchronous FIFO and an asynchronous FIFO (AFIFO) written in SystemVerilog/Verilog.

## Project Overview

The project includes:
- synchronous FIFO design
- asynchronous FIFO design
- corresponding testbenches
- simulation and synthesis scripts

The goal of the project is to verify correct FIFO behavior, including data storage and retrieval, as well as handling of full and empty conditions in both synchronous and asynchronous designs.

## Repository Structure

```text
afifo/
  dv/      # testbench for asynchronous FIFO
  rtl/     # RTL implementation of asynchronous FIFO

fifo/
  dv/      # testbench for synchronous FIFO
  rtl/     # RTL implementation of synchronous FIFO

Makefile   # commands for linting, simulation, and synthesis
synth.tcl  # synthesis script
```
Implemented Designs
Synchronous FIFO

The synchronous FIFO uses a single clock domain for both read and write operations.

Asynchronous FIFO

The asynchronous FIFO uses separate clock domains for read and write operations, making it suitable for clock domain crossing scenarios.

Verification

Testbenches are provided for both designs:

synchronous FIFO testbench: fifo/dv/FIFO_tb.sv
asynchronous FIFO testbench: afifo/dv/AFIFO_tb.sv
### Available Commands
Linting with Verilator
make lint_tb
make lint_dut
lint_tb runs linting with the testbench as the top module
lint_dut runs linting with the DUT as the top module
### Simulation with Verilator
make verilator
### Synthesis with Yosys
make synth_yosys
### Synthesis with Vivado
make synth_vivado
### Run everything
make all
