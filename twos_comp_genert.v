`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:00:11 10/23/2020 
// Design Name: 
// Module Name:    twos_comp_genert 
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
module twos_comp_genert (in1,sum);
parameter DATA_WID_ =17;
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

defparam h.n = 17 ;
fa h (1'b0, temp, 17'b1, sum, );

endmodule

