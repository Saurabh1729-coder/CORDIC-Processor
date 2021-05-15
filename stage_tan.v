`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:35:17 11/02/2020 
// Design Name: 
// Module Name:    stage_tan 
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
module stage_tan(xp,yp,zp,ei, xn , yn, zn,Z_sign);
	 
	 input signed [16:0] xp;
	
	 input signed [16:0] yp;
	 
	 input signed [16:0] zp;
	 
	 input signed[16:0] ei;
	 
	 input Z_sign;
	 
	 output signed[16:0] xn ;
	 output signed [16:0] yn;
	 output signed [16:0]zn;
	 
     parameter p=0;	 
	  wire [16:0] xshift;
	
	  wire [16:0] ei_shift;
	  wire [16:0] ei_shift_comp;
	  wire  [16:0] xshift2;

	  wire  [16:0] tan2;
	  wire [16:0] xshift_comp;
	  
	  wire [31:0] tan_comp;
	
	wire signed [16:0] X [0:16];

	wire signed [16:0] Z [0:16];
	
	genvar k;
	assign X[0] = xp;
	assign Z[0] = ei;
	
	generate
	 for (k=0; k < p; k=k+1)
	 begin: KLM
     shift as1 (X[k],X[k+1]);
	  
	  shift as3 (Z[k],Z[k+1]);
   end
   endgenerate
	 
	 assign xshift = X[p];

	 assign ei_shift = Z[p];
	 
	 
	 defparam t1.DATA_WID_=17;
	 twos_comp_genert t1(xshift,xshift_comp);
	 twos_comp_genert t3(ei_shift, ei_shift_comp);
	  
	  //Isko karna hai abhi
	 /* always @(*)
	  begin
	  if(Z_sign)
	  begin
	   xshift2 <= xshift_comp;
	   tan2 <= ei_shift;
	  end
	  else
	  begin
	   xshift2 <= xshift;
	   tan2 <= ei_shift_comp;
	  end
	  end*/
	  
	  genvar v;
	  generate
	  for(v=0 ; v<17 ; v=v+1)
	  begin: SKY
	  wire  w2, w3, w4;
	  and(w3, Z_sign, xshift_comp[v]);
	  not(w2,Z_sign);
	  and(w4, w2, xshift[v]);
	  or(xshift2[v],w3,w4);
	  
	  wire  u2, u3, u4;
	  and(u3, Z_sign, ei_shift[v]);
	  not(u2,Z_sign);
	  and(u4, u2, ei_shift_comp[v]);
	  or(tan2[v],u3,u4);
	  end
	  endgenerate
	  
	  
	  
	  
	defparam fa1.n=17;
	  fa fa1(1'b0, xp, 17'b0,xn, );
	defparam fa2.n=17;  
	  fa fa2(1'b0, yp, xshift2,yn, );
   defparam fa3.n=17;
	  fa fa3(1'b0, zp, tan2, zn, );
	  
	  
endmodule
