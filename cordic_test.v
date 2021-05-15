`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   08:11:37 10/26/2020
// Design Name:   cordic
// Module Name:   D:/Xilinx_Project/CORDIC3/cordic_test.v
// Project Name:  CORDIC3
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: cordic
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

`timescale 1 ns/100 ps

module cordic_test;

localparam  width = 16; 

reg  [width-1:0] Xin, Yin;
reg  [31:0] angle;
wire [width:0] Xout, Yout;
wire [width:0] Xout_tan, Yout_tan, tangent;


CORDIC sin_cos( angle, Xin, Yin, Xout, Yout, Xout_tan, Yout_tan, tangent);


initial
begin
   //angle = 32'b11111111110001000000000000000000; //-60
	//angle = 32'b11111111100010000000000000000000; //-120
	//angle = 32'b00000000100001110000000000000000;//135
   angle = 32'b00000000001111000000000000000000;//60
	//angle = 32'b00000000000110100000000000000000; //26
	//angle = 32'b0;
	//Xin = 16'b0100110110110111;
	Xin = 10000/1.647;              //scaled by 10000
   Yin = 16'd0;                     
end

  

initial
$monitor("%d %d %d", Xout,Yout,tangent);






endmodule

