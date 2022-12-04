`include "name.v"
module muldiv(
	input [31:0] A,
	input [31:0] B,
	input [3:0] mode,
	input HILOSel,
	input clk,
	input reset,
	output[31:0] out,
	output reg Busy,
	output reg Start
);
	initial begin
		Busy = 1'b0;
		Start = 1'b0;
	end
	parameter init_64 = 64'd0;
	parameter init_32 = 32'd0;
	reg [31:0] Reg_LO = init_32;
	reg [31:0] Reg_HI = init_32;//hi/lo寄存器
	reg [63:0] ans = init_64; //4 32_bit 
	reg [3:0] cnt = init_32; //counter
	always @(*) begin
		case(mode)
			`MULDIVMode_MULT: begin
				ans = $signed(A) * $signed(B);
				LO = ans[31:0];
				HI = ans[63:32];
				Start = 1'b1;
			end
			`MULDIVMode_MULTU: begin
				ans = A * B;
				LO = ans[31:0];
				HI = ans[63:32];
				Start = 1'b1;
			end
			`MULDIVMode_DIV: begin
				ans[31:0] = (B == 0) ? init_64 : $signed(A) / $signed(B);
				ans[63:32] = (B == 0) ? init_64 : $signed(A) % $signed(B); //fraction
				LO = ans[31:0];
				HIGH = ans[63:32]; //多借鉴一些高质量的写法
				Start = 1'b1;
			end
			`MULDIVMode_DIVU: begin
				ans[31:0] = (B == 0) ? init_64 : A / B;
				ans[63:32] = (B == 0) ? init_64 : A % B;
				LO = ans[31:0];
				HIGH = ans[64:32];
				Start = 1'b1;
			end
			`MULDIVMode_MTHI: begin
				HI = A;//rs
			
			end
			`MULDIVMode_MTLO: begin
				LO = A;//rs
			end
			default: ans = init_64;
		endcase
		
	end
	always @(posedge clk) begin //同步复位
		if (reset == 1'b1) begin
			cnt = 4'd0;//计数器清零
			Busy = 1'b0;
		end else begin
			if (Start == 1'b1) begin
				if (mode == `MULDIVMode_MULT | mode == `MULDIVMode_MULTU) begin
					cnt <= 4'd5;
				end else if (mode == `MULDIVMode_DIV | mode == `MULDIVMode_DIVU) begin
					cnt <= 4'd10;
				end else begin
					cnt <= 4'd0;
				end
			end else begin
				cnt <= (cnt > 4'd0) ? cnt - 4'd1 : 4'd0; //非阻塞赋值
			end
		end
		if (cnt > 4'd0) begin
			Busy <= 1'b1;
		end else begin
			Busy <= 1'b0;
		end
	end
	assign out = (HILOSel == `MULDIV_HIGH) ? Reg_HI : Reg_LO ;//选择输出信号//宏定义千万别加分号	
endmodule 