/*
 * Harold Agnote
 * Professor Joshua Hayter
 * CECS 341 - Sec. 07
 * 3/16/2017
 *
 * Lab 4 - MIPS WriteBack Stage
 *
 */

`timescale 1ns / 1ps

`include "mux2.v"

module WB_Stage(
    input regwritem, memtoregm,
    input   [31:0] aluoutw, readdata,
    input   [4:0]   writeregm,
    output          regwritew,
    output  [4:0]   writeregw,
    output  [31:0]  resultw
    );
    
    assign  regwritew = regwritem,
            writeregw = writeregm;
            
    // register data input selection mux
    mux2 #(32)  resmux(
                        .d0(aluoutw),
                        .d1(readdata),
                        .s(memtoregm),
                        .y(resultw));
                        
endmodule
