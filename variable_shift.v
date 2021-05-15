`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:16:56 11/02/2020 
// Design Name: 
// Module Name:    variable_shift 
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
module Variable_arithmetic_shift(
input clk,
input [16:0] in,
input [4:0] mod,
output [16:0] out,
input reset,
input load
);

//reg load;
//reg reset;
wire clk1;

/*initial begin
reset=1;
load =1;
#2 reset=0;
#25 load  = 0;
end
*/

variable_mod_counter C(mod,clk,reset,clk1);
arithmetic_shift A(load,reset,in,out,clk1);
initial begin
#1 $display("Pehli baar load=%d, in=%d,out=%d,clk1 = %d, clk = %d, mod = %d, reset=%d",load,in,out, clk1, clk, mod, reset );
#4 $display("Pehli baar prt2 load=%d, in=%d,out=%d,clk1 = %d, clk = %d, mod = %d, reset=%d",load,in,out, clk1, clk, mod, reset );
end
endmodule



module variable_mod_counter(input [4:0] mod,
input clk_v,
input rst1,
output var_clk);
    wire [4:0] q;	 
    wire w1,w2,w3,w4,w5,rst2;
	 //assign rst2=0;
	 wire clk_v2;
	 xnor(w1,mod[0],q[0]);
	 xnor(w2,mod[1],q[1]);
	 xnor(w3,mod[2],q[2]);
	 xnor(w4,mod[3],q[3]);
	 xnor(w5,mod[4],q[4]);
	 and(rst2 ,w1 , w2 , w3 , w4 , w5);
	 //or(reset,rst1,rst2);
	 and(clk_v2,~rst2,clk_v);
	 T_FF T1(1'b1,clk_v2,rst1,q[0]);
	 T_FF T2(1'b1,q[0],rst1,q[1]);
	 T_FF T3(1'b1,q[1],rst1,q[2]);
	 T_FF T4(1'b1,q[2],rst1,q[3]);
	 T_FF T5(1'b1,q[3],rst1,q[4]);
	 and(var_clk,q[0],1'b1);
	 //initial 
	// #1 $monitor(" MOD COUNTER mod = %d clk_v = %d, var_clk = %d", mod, clk_v, var_clk);
endmodule

//--------------------------------------------

module T_FF(
    input T,
    input clk_t,
    input reset,
    output reg Q
    );
	 always@(negedge clk_t or posedge reset)
	 begin
	 if(reset)
	 Q<=0;
	 else
	 if(T==0)
	 Q<=Q;
	 else
	 Q<=~Q;
	 end
endmodule


//----------------------------------------------


module arithmetic_shift(
    input load,
	 input reset,
    input [16:0] in,
    output [16:0] out,
    input clk_a
    );
	 //initial
	// #1 $display("Dusara wala load1=%d, in=%d,out=%d",load1,in,out);
	 and(out[16],in[16],1'b1);
	 wire load1;
	 assign load1 = load;
	 parameter STG=16;
	 genvar i;
	 generate
	 for(i=STG-1;i>=0;i=i-1)
	 begin: lodu
	 load_register fgh(reset,clk_a,in[i],out[i+1],out[i],load1);
	 end
	 endgenerate
	 
endmodule


//-------------------------------------------------


module load_register(
    input reset,
    input clk_l,
    input in,
	 input prev,
    output out,
    input load2
    );
	// initial
	// #1 $display("Tisari baar load=%d, in=%d,out=%d, clk=%d",load2,in,out, clk_l);
	 wire w1,w4,w5,w6;
	 not(w1,load2);
	 and(w5,load2,in);
	 and(w4,prev,w1);
	 or(w6,w4,w5);
	  D_FF T1(w6,clk_l,reset,out);
	 


endmodule


//------------------------------------------------


module D_FF(
    input D,
    input clk_d,
    input reset,
    output reg Q
    );
	 //initial
	// #1 $display("Fourth baar D=%d, clk= %d,  reset= %d, out= %d",D ,clk_d,reset,Q);
	 always@(negedge clk_d or posedge reset)
	 begin
	 if(reset)
	 Q<=0;
	 else
	 Q<=D;
	 end
endmodule
