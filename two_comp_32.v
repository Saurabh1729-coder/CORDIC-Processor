`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:02:30 10/31/2020 
// Design Name: 
// Module Name:    two_comp_32 
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
module two_comp_32 (in1,sum);
parameter DATA_WID_ =32;
input [DATA_WID_ - 1:0] in1;
output [DATA_WID_ - 1:0] sum;
wire [DATA_WID_ - 1:0] temp;
reg c = 1'b1;
genvar j;
generate
 for(j = 0; j < DATA_WID_; j = j + 1) begin: carry_generator
 HALF_ADDER_ f(in1[j] , c, temp[j]);
 end
endgenerate 
defparam h.n = 32;
fa h (1'b0, temp, 32'b1, sum, );
endmodule

