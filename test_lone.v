`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:03:13 11/02/2020
// Design Name:   shift
// Module Name:   C:/Users/hp/Desktop/FPGA/CORDIC3_Gate_FixedPoint _varshift2/CORDIC3_Gate_FixedPoint/CORDIC3/test_lone.v
// Project Name:  CORDIC3
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: shift
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_lone;

	// Inputs
	reg [16:0] in;

	// Outputs
	wire [16:0] out;

	// Instantiate the Unit Under Test (UUT)
	shift uut (
		.in(in), 
		.out(out)
	);

	initial begin
		// Initialize Inputs
		in = 17'b10101010101010101;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

