`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:31:13 10/20/2020 
// Design Name: 
// Module Name:    stage 
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
module stage(xp,yp,zp,tan, xn , yn, zn,Z_sign);
	 
	 input signed [16:0] xp;
	
	 input signed [16:0] yp;
	 
	 input signed [31:0] zp;
	 
	 input signed[31:0] tan;
	 
	 input Z_sign;
	 
	 output signed[16:0] xn ;
	 output signed [16:0] yn;
	 output signed [31:0]zn;
	 
     parameter p=0;	 
	  wire [16:0] xshift;
	  wire [16:0] yshift;
	  wire [16:0] xshift2;
	  wire [16:0] yshift2;
	  wire [31:0] tan2;
	  wire [16:0] xshift_comp;
	  wire [16:0] yshift_comp;
	  wire [31:0] tan_comp;
	 
	wire signed [16:0] X [0:16];
   wire signed [16:0] Y [0:16];
	
	
	//xxxxxxx SHIFTER xxxxxxxxx//
	genvar k;
	assign X[0] = xp;
	assign Y[0] = yp;
	
	generate
	 for (k=0; k < p; k=k+1)
	 begin: KLM
     shift aas1 (X[k],X[k+1]);
	  shift aas2 (Y[k],Y[k+1]);
   end
   endgenerate
	
	 
	 assign xshift = X[p];
	 assign yshift = Y[p];
	 
	 //xxxxxxxxxx Generating 2's complement xxxxxxxxxxx//
	 defparam t1.DATA_WID_=17;
	 twos_comp_genert t1(xshift,xshift_comp);
	 defparam t2.DATA_WID_=17;
	 twos_comp_genert t2(yshift,yshift_comp);
	
	 two_comp_32 t3(tan, tan_comp);
	  
	/* //Isko badalna hai
	  always @(*)
	  begin
	  if(Z_sign)
	  begin
	   yshift2 <= yshift;
	   xshift2 <= xshift_comp;
	   tan2 <= tan;
	  end
	  else
	  begin
	   yshift2 <= yshift_comp;
	   xshift2 <= xshift;
	   tan2 <= tan_comp;
	  end
	  end
	  */
	  
	  //xxxxxxxxx Implementing MUX xxxxxxxxx
	  genvar v;
	  generate
	  for(v=0 ; v<17 ; v = v+1)
	  begin: SKY
	  wire  w2, w3, w4;
	  and(w3, Z_sign, xshift_comp[v]);
	  not(w2,Z_sign);
	  and(w4, w2, xshift[v]);
	  or(xshift2[v],w3,w4);
	  
	  wire  t2, t3, t4;
	  and(t3, Z_sign, yshift[v]);
	  not(t2,Z_sign);
	  and(t4, t2, yshift_comp[v]);
	  or(yshift2[v],t3,t4);
	  
	  end
	  endgenerate
	  
	  genvar a;
	  generate
	  for(a=0; a < 32 ; a=a+1)
	  begin:AK
	  wire  u2, u3, u4;
	  and(u3, Z_sign, tan[a]);
	  not(u2,Z_sign);
	  and(u4, u2, tan_comp[a]);
	  or(tan2[a],u3,u4);
	  end
	  endgenerate
	  
	//xxxxxxxxxx Final Addition xxxxxxxxx//
	
	defparam fa1.n=17;
	  fa fa1(1'b0, xp, yshift2,xn, );
	defparam fa2.n=17;  
	  fa fa2(1'b0, yp, xshift2,yn, );
   defparam fa3.n=32;
	  fa fa3(1'b0, zp, tan2, zn, );
	  
endmodule
