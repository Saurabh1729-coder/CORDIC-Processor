`timescale 1ns / 1ps

module CORDIC( angle, Xin, Yin, Xout, Yout , Xout_tan, Yout_tan, tangent);
	
	parameter xy_size = 16;   
   
   
   input  signed       [31:0] angle;
   input  signed  [xy_size-1:0] Xin;
   input  signed  [xy_size-1:0] Yin;
   output signed    [xy_size:0] Xout;
   output signed    [xy_size:0] Yout;
	output [16:0] tangent;
	output [16:0] Xout_tan;
	output [16:0] Yout_tan;


   wire  signed [31:0] atan_tbl [0:16];
 
   //Storing atan value as look-up Table

   assign atan_tbl[00] = 32'b00000000001011010000000000000000; 
   assign atan_tbl[01] = 32'b00000000000110101001000010100111; 
   assign atan_tbl[02] = 32'b00000000000011100000100101000111; 
   assign atan_tbl[03] = 32'b00000000000001110010000000000001; 
   assign atan_tbl[04] = 32'b00000000000000111001001110001010;
   assign atan_tbl[05] = 32'b00000000000000011100101000110111;
   assign atan_tbl[06] = 32'b00000000000000001110010100101010;
   assign atan_tbl[07] = 32'b00000000000000000111001010010110;
   assign atan_tbl[08] = 32'b00000000000000000011100101001011;
   assign atan_tbl[09] = 32'b00000000000000000001110010100101;
   assign atan_tbl[10] = 32'b00000000000000000000111001010010;
   assign atan_tbl[11] = 32'b00000000000000000000011101010010;
   assign atan_tbl[12] = 32'b00000000000000000000001110010100;
	assign atan_tbl[13] = 32'b00000000000000000000000111001010;
	assign atan_tbl[14] = 32'b00000000000000000000000011100101;
	assign atan_tbl[15] = 32'b00000000000000000000000001110010;
	assign atan_tbl[16] = 32'b00000000000000000000000000111001;
	

   wire signed [xy_size:0] X [0:xy_size-1];
   wire signed [xy_size:0] Y [0:xy_size-1];
   wire signed    [31:0] Z [0:xy_size-1]; 
	
	reg signed [xy_size:0] X_temp;
	reg signed [xy_size:0] Y_temp;
	reg signed [31:0] Z_temp;

 
   
 always @(*)
   begin // make sure the rotation angle is in the -pi/2 to pi/2 range.  If not then pre-rotate
      if(angle<=5898240 && angle>=-5898240)
         begin    
            X_temp <= Xin;
            Y_temp <= Yin;
            Z_temp <= angle;
				 
         end
         
        else if(angle>=5898240 && angle<=11796480)
         begin
            X_temp <= -Yin;
            Y_temp <= Xin;
            Z_temp <= angle-5898240; // subtract pi/2 from angle for this quadrant
				
         end
         
        else if(angle<=-5898240 && angle>=-11796480)
         begin
            X_temp <= Yin;
            Y_temp <= -Xin;
            Z_temp <= angle + 5898240; // add pi/2 to angle for this quadrant
				
         end
   end
	
	 
    assign X[0]=X_temp;
	 assign Y[0]=Y_temp;
	 assign Z[0]=Z_temp;
 
 

   genvar i;
   generate
   for (i=0; i < 15; i=i+1)
   begin: XYZ
      wire  Z_sign;
      assign Z_sign = Z[i][31]; 
      defparam s.p=i;
      stage s ( X[i], Y[i], Z[i], atan_tbl[i] ,X[i+1] , Y[i+1] , Z[i+1],Z_sign);
   end
   endgenerate
   
   
   //------------------------------------------------------------------------------
   //                                 output
   //------------------------------------------------------------------------------
   assign Xout = X[15];
   assign Yout = Y[15];

	
	cordic_tan ttt (Xout, Yout, Xout_tan, Yout_tan, tangent);
	
	

endmodule


