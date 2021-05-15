`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:17:17 10/17/2020 
// Design Name: 
// Module Name:    arithematic_shift 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module arithematic_shift(input [15:0] x, output [15:0] y
    );
	 assign y[14:0] = x[15:1];
	 assign y[15] = x[15];


endmodule
