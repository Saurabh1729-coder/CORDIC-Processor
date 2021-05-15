`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:28:38 10/20/2020 
// Design Name: 
// Module Name:    fa 
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
module fa(cin, x, y, s, cout
    );
parameter n=32;
input cin; 
input [n-1:0]x,y;
output [n-1:0]s;
output cout;
wire [n:0]c;


assign c[0]=cin;
assign cout=c[n];
genvar k;
generate 
for(k=0;k<n;k=k+1)
begin:abc

fulladdr_test m1(s[k],x[k],y[k],c[k],c[k+1]);



end
endgenerate 


endmodule

module fulladdr_test(output s,input x,input y,input c,output cout);
xor(s,x,y,c);
wire w1, w2, w3;
and(w1,x,y);
and(w2,y,c);
and(w3,c,x);
or(cout,w1,w2,w3);
endmodule









