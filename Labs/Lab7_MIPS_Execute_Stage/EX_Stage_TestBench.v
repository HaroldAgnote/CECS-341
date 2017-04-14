`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:47:37 04/10/2017
// Design Name:   EX_Stage
// Module Name:   D:/Documents/git/CECS-341/Labs/Lab7_MIPS_Execute_Stage/EX_Stage_TestBench.v
// Project Name:  Lab7_MIPS_Execute_Stage
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: EX_Stage
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module EX_Stage_TestBench;

	// Inputs
	reg regwrited;
	reg memtoregd;
	reg memwrited;
	reg branchd;
	reg [2:0] alucontrole;
	reg alusrce;
	reg regdste;
	reg [31:0] srcae;
	reg [31:0] writedatad;
	reg [4:0] rte;
	reg [4:0] rde;
	reg [31:0] signimme;
	reg [31:0] pcplus4e;

	// Outputs
	wire regwritee;
	wire memtorege;
	wire memwritee;
	wire branche;
	wire zeroe;
	wire [31:0] aluoute;
	wire [31:0] writedatae;
	wire [4:0] writerege;
	wire [31:0] pcbranche;
    
    integer i;

	// Instantiate the Unit Under Test (UUT)
	EX_Stage uut (
		.regwrited(regwrited), 
		.memtoregd(memtoregd), 
		.memwrited(memwrited), 
		.branchd(branchd), 
		.alucontrole(alucontrole), 
		.alusrce(alusrce), 
		.regdste(regdste), 
		.srcae(srcae), 
		.writedatad(writedatad), 
		.rte(rte), 
		.rde(rde), 
		.signimme(signimme), 
		.pcplus4e(pcplus4e), 
		.regwritee(regwritee), 
		.memtorege(memtorege), 
		.memwritee(memwritee), 
		.branche(branche), 
		.zeroe(zeroe), 
		.aluoute(aluoute), 
		.writedatae(writedatae), 
		.writerege(writerege), 
		.pcbranche(pcbranche)
	);

	initial begin
		srcae = 32'h00001212;   writedatad = 32'h00003434;
        signimme = 32'hffffffff;    pcplus4e = 32'h44444444;
        for (i = 0; i < 8; i = i + 1)
            testcase;
        #10 $finish;
	end
    
    task testcase;
    begin
        {regwrited, memtoregd, memwrited, branchd, alusrce, regdste} = $random;
        alucontrole = i;
        case (alucontrole)
            0: $display("ALU is performing AND");
            1: $display("ALU is performing OR");
            2: $display("ALU is performing ADD");
            6: $display("ALU is performing SUB");
            7: $display("ALU is performing SLT");
            default: $display("ALU Operation is invalid");
        endcase
        #1 $display("aluoute = %h", aluoute);
        if(zeroe != (!aluoute)) $display("zero flag is malfunctioning");
        if(regwritee != regwrited || memtorege != memtoregd ||
            memwritee != memwrited || branche != branchd || writedatae != writedatad)
            begin $display("Control signals did not pass correctly"); $finish; end
        if(pcbranche != ({signimme[29:0],2'b00} + pcplus4e))
            begin
                $display("Branch Adder is malfunctioning");
                $finish;
            end
        if(i == 3) i = 5;
    end
    endtask
endmodule

