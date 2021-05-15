`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:01:03 11/02/2020 
// Design Name: 
// Module Name:    shift 
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
module shift(input[16:0] in, output[16:0] out
    );
	 and(out[16],in[16], 1'b1);
	 and(out[15],in[16], 1'b1);
	 and(out[14],in[15], 1'b1);
	 and(out[13],in[14], 1'b1);
	 and(out[12],in[13], 1'b1);
	 and(out[11],in[12], 1'b1);
	 and(out[10],in[11], 1'b1);
	 and(out[9],in[10], 1'b1);
	 and(out[8],in[9], 1'b1);
	 and(out[7],in[8], 1'b1);
	 and(out[6],in[7], 1'b1);
	 and(out[5],in[6], 1'b1);
	 and(out[4],in[5], 1'b1);
	 and(out[3],in[4], 1'b1);
	 and(out[2],in[3], 1'b1);
	 and(out[1],in[2], 1'b1);
	 and(out[0],in[1], 1'b1);


endmodule
