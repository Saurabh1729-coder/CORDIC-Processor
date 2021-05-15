`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:13:44 10/20/2020
// Design Name:   arithematic_shift
// Module Name:   D:/Xilinx_Project/CORDIC3/test.v
// Project Name:  CORDIC3
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: arithematic_shift
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test;

	// Inputs
	reg [15:0] x ;

	// Outputs
	wire [15:0] y;

	// Instantiate the Unit Under Test (UUT)
	arithematic_shift uut (
		.x(x), 
		.y(y)
	);

	initial begin
		// Initialize Inputs
		x = 16'b0101010101010101;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

