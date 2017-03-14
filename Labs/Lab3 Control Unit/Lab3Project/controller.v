`timescale 1ns/1ps
`include "aludec.v"
`include "maindec.v"

module controller (op, funct, zero, memtoreg, memwrite,
                    pcsrc, alusrc, regdst, regwrite,
                    jump, alucontrol );

    input [5:0] op, funct;
    input zero;
    output memtoreg, memwrite,
    pcsrc, alusrc,
    regdst, regwrite,
    jump;
    output [2:0] alucontrol;

    wire [1:0] aluop;
    wire branch;

    maindec md( .op(op),
                .memtoreg(memtoreg),
                .memwrite(memwrite),
                .branch(branch),
                .alusrc(alusrc),
                .regdst(regdst),
                .regwrite(regwrite),
                .jump(jump),
                .aluop(aluop)
                );

    aludec ad(  .funct(funct),
                .aluop(aluop),
                .alucontrol(alucontrol)
                );

    assign pcsrc = branch & zero;
endmodule
