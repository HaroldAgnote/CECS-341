`timescale 1ns / 1ps

module MEM_Stage_TestBench();
    reg clk, regwritee, memtorege, memwritem, branchm, zerom;
    reg [31:0] aluoute, pcbranche, writedatam;
    reg [4:0] writerege;

	// Outputs
	wire pcsrcm, regwritem, memtoregm;
    wire [31:0] aluoutm, readdatam, pcbranchm;
    wire [4:0] writeregm;
    integer i;

	// Instantiate the Unit Under Test (UUT)
	MEM_Stage dut(clk, regwritee, memtorege, memwritem, branchm, zerom,
                    aluoute, writedatam, writerege, pcsrcm, pcbranche,
                    regwritem, memtoregm, aluoutm, readdatam, writeregm,
                    pcbranchm);
    
    always #5 clk = ~clk; // Clock Pulse Generation
	initial begin clk = 1;
		@(negedge clk) rndctrlsig(); showmem(); checksignals();
        memwritem = 1; aluoute = 32'h0; writedatam = 32'h01010101;
        @(negedge clk) rndctrlsig(); showmem(); checksignals();
        memwritem = 1; aluoute = 32'h4; writedatam = 32'h12121212;
        @(negedge clk) rndctrlsig(); showmem(); checksignals();
        memwritem = 1; aluoute = 32'h8; writedatam = 32'h23232323;
        #10 showmem(); $finish;
	end
    
    task checksignals;
    begin
        @(posedge clk) #1
        if (regwritem != regwritee || memtoregm != memtorege ||
            pcsrcm != (branchm & zerom) || aluoutm != aluoute ||
            writeregm != writerege || pcbranchm != pcbranche)
            begin
                $display("Test Failed: Control Signals Faulty");
                $finish;
            end
        else
            begin
                $display("Control Signals OK");
            end
    end
    endtask
    
    task rndctrlsig;
        {regwritee, memtorege, branchm, zerom, writerege, pcbranche} = $random;
    endtask
    
    task showmem;
    begin
        @(posedge clk) #1
        for (i = 0; i < 4; i = i + 1)
            $display("dmem[%h] %h", i, dut.dmem.RAM[i]);
    end
    endtask
endmodule

