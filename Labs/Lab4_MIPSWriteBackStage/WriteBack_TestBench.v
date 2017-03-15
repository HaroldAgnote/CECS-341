`timescale 1ns / 1ps

module WriteBack_TestBench;

	// Inputs
	reg regwritem;
	reg memtoregm;
	reg [31:0] aluoutw;
	reg [31:0] readdata;
	reg [4:0] writeregm;

	// Outputs
	wire regwritew;
	wire [4:0] writeregw;
	wire [31:0] resultw;
    
    integer i;

	// Instantiate the Unit Under Test (UUT)
	WB_Stage uut (
		.regwritem(regwritem), 
		.memtoregm(memtoregm), 
		.aluoutw(aluoutw), 
		.readdata(readdata), 
		.writeregm(writeregm), 
		.regwritew(regwritew), 
		.writeregw(writeregw), 
		.resultw(resultw)
	);

	initial

    begin
        for (i = 0; i < 5; i = i + 1)
        begin
            aluoutw = $random; readdata = $random;
            {writeregm, regwritem} = $random; memtoregm = i;
            #1
            testcase();
        end
        #1
        $finish;
    end
    
    task testcase();
    begin
        $display("Test Case %d", i);
        $display("aluoutw = %h\treaddata = %h", aluoutw, readdata);
        $display("memtoregm = %b\tresultw = %h", memtoregm, resultw);
        
        if ((!memtoregm && resultw != aluoutw) || (memtoregm && resultw != readdata))
        begin
            $display("TEST FAILED: resmux has malfunctioned");
            $finish;
        end
        
        $display("regwritem = %b\tregwritew = %b", regwritem, regwritew);
        $display("writeregm = %h\twriteregw = %h", writeregm, writeregw);
        
        if ((regwritem != regwritew) || (writeregm != writeregw))
        begin
            $display("TEST FAILED: signal passing malfunctioned");
            $finish;
        end
        
        $display("");
    end
    endtask
endmodule

