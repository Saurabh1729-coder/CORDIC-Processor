`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:17:42 11/02/2020
// Design Name:   Variable_arithmetic_shift
// Module Name:   C:/Users/hp/Desktop/FPGA/CORDIC3_Gate_FixedPoint _varshift2/CORDIC3_Gate_FixedPoint/CORDIC3/test_shift.v
// Project Name:  CORDIC3
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Variable_arithmetic_shift
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_shift;

	// Inputs
	reg clk;
	reg [16:0] in;
	reg [4:0] mod;

	// Outputs
	wire [16:0] out;

	// Instantiate the Unit Under Test (UUT)
	Variable_arithmetic_shift uut (
		.clk(clk), 
		.in(in), 
		.mod(mod), 
		.out(out)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		in = 17'b10101010101010101;
		mod = 10;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
	initial
	forever #5 clk = ~clk;
      
endmodule

