`timescale 1ns / 1ps

`include "mux2.v"
`include "flopr.v"
`include "adder32.v"
`include "imem.v"

/*
 * Harold Agnote
 * Professor Joshua Hayter
 * CECS 341 - Sec. 07
 * 4/6/2017
 *
 * Lab 6 - MIPS_IF
 *
 */

module IF_Stage(input clk, pcsrc, reset, input [31:0] pcbranch,
                output [31:0] instr, output [31:0] pcplus4);
                
    wire        [31:0] pc, pcnext;
    
    assign pc[31:8] = 0;
    
    flopr pcreg(clk, reset, pcnext[7:0], pc[7:0]);

    adder32 pcadd({24'h0, pc[7:0]},32'h4,pcplus4);
    
    mux2 #(32) pcbrmux(pcplus4, pcbranch,pcsrc,pcnext);
    
    imem imem(pc[7:2], instr);

endmodule
