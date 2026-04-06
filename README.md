# FIFO and Asynchronous FIFO Design

This project implements and verifies both a synchronous FIFO and an asynchronous FIFO (AFIFO) in SystemVerilog.

## Project Overview

The repository includes:
- synchronous FIFO design
- asynchronous FIFO design
- corresponding testbenches
- simulation and synthesis scripts

The goal of the project is to verify correct FIFO behavior, including data storage and retrieval, as well as full and empty flag handling in both synchronous and asynchronous designs.

## Implemented Designs

### Synchronous FIFO
The synchronous FIFO uses a single clock domain for both read and write operations.

### Asynchronous FIFO
The asynchronous FIFO uses separate clock domains for read and write operations, making it suitable for clock domain crossing scenarios.

## Verification

Testbenches are provided for both designs:
- synchronous FIFO testbench: `fifo/dv/FIFO_tb.sv`
- asynchronous FIFO testbench: `afifo/dv/AFIFO_tb.sv`

## Available Commands

### Linting with Verilator

```bash
make lint_tb
make lint_dut
```

- `lint_tb` runs linting with the testbench as the top module
- `lint_dut` runs linting with the DUT as the top module

### Simulation with Verilator

```bash
make verilator
```

### Synthesis with Yosys

```bash
make synth_yosys
```

### Synthesis with Vivado

```bash
make synth_vivado
```

### Run Everything

```bash
make all
```
