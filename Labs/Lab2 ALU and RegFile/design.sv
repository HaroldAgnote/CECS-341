/*
 * Harold Agnote
 * Professor Joshua Hayter
 * CECS 341 - Sec. 07
 * 2/16/2017
 *
 */
`timescale 1ns/100ps

`include "regfile.v"
`include "flopr.v"
`include "alu.v"

`define datasize 32
module simple_datapath(
  input [2:0]	op_code,
  input 		clk, reset,
  input [4:0]	rs, rt, rd,
  input 		wr_en,
  input [`datasize - 1:0] d_in,
  output [`datasize - 1:0] d_out,
  output c, n, z, p
    );
    
  wire [`datasize-1:0] srca, srcb, aluout;
  
  regfile #(`datasize) rf (
    .ra1(rs),
    .ra2(rt),
    .wa3(rd),
    .we3(wr_en),
    .wd3(d_in),
    .clk(clk),
    .rd1(srca),
    .rd2(srcb));
  							
  alu #(`datasize) a1 (
    .a(srca),
    .b(srcb),
    .aluop(op_code),
    .y(aluout),
    .c(c),
    .n(n),
    .z(z),
    .p(p));
  
  flopr #(`datasize) ALUout (clk, reset, 1, aluout, d_out);
  
endmodule

