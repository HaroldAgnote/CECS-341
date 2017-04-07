`timescale 1ns / 1ps

module IF_Stage_TestBench;

	// Inputs
	reg clk;
	reg pcsrc;
	reg reset;
	reg [31:0] pcbranch;

	// Outputs
	wire [31:0] instr;
	wire [31:0] pcplus4;

	// Instantiate the Unit Under Test (UUT)
	IF_Stage uut (
		.clk(clk), 
		.pcsrc(pcsrc), 
		.reset(reset), 
		.pcbranch(pcbranch), 
		.instr(instr), 
		.pcplus4(pcplus4)
	);

    integer i;
    
    always #5 clk = ~clk;

	initial begin
        clk = 1; reset = 1; #1 reset = 0;
        for (i = 0; i < 64; i = i + 1) uut.imem.RAM[i] = $random;
        for (i = 0; i < 10; i = i + 1) testcase;
        #1 $finish;
	end
    
    task testcase;
    begin
        @(negedge clk) {clk, pcsrc, reset, pcbranch} = $random;
        @(posedge clk) $display("Test Case %d", i);
        #1 $display("pcsrc = %b\tpcbranch = %h", pcsrc, pcbranch);
        $display("pc = %h\tinstr = %h",uut.pc, instr);
    end
    endtask
endmodule

