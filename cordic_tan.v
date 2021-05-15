`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:33:41 11/02/2020 
// Design Name: 
// Module Name:    cordic_tan 
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
`timescale 1ns / 1ps

module cordic_tan( Xin, Yin, Xout, Yout, Zout
    );
	
	parameter XY_SZ = 16;   
   localparam STG = XY_SZ; 
   

   input  signed  [XY_SZ:0] Xin;
   input  signed  [XY_SZ:0] Yin;
   output signed    [XY_SZ:0] Xout;
   output signed    [XY_SZ:0] Yout;
	output signed    [XY_SZ:0] Zout;



	

   wire signed [XY_SZ:0] X [0:STG-1];
   wire signed [XY_SZ:0] Y [0:STG-1];
   wire signed    [XY_SZ:0] Z [0:STG-1]; 
	
	wire signed [XY_SZ:0] ei = 17'b00010011100010000;
	
	 
    assign X[0]=Xin;
	 assign Y[0]=Yin;
	 assign Z[0]=0;
 
 
 genvar i;

   generate
   for (i=0; i < 12; i=i+1)
   begin: PQR
      wire  Z_sign;
      xor xx(Z_sign , X[i][16] , Y[i][16], 1'b1);	
      defparam s.p=i;
      stage_tan s ( X[i], Y[i], Z[i], ei ,X[i+1] , Y[i+1] , Z[i+1],Z_sign);
		
   end
   endgenerate
   
   
   //------------------------------------------------------------------------------
   //                                 output
   //------------------------------------------------------------------------------
   assign Xout = X[12];
   assign Yout = Y[12];
	assign Zout = Z[12];
	
endmodule
