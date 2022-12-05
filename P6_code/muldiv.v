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
	reg [31:0] LO = init_32;
	reg [31:0] HI = init_32;//hi/lo�Ĵ���
	reg [63:0] ans = init_64; //4 32_bit 
	reg [3:0] cnt = init_32; //counter
	always @(*) begin
			case(mode)
				`MULDIVMode_MULT: begin
					Start = 1'b1;
				end
				`MULDIVMode_MULTU: begin
					Start = 1'b1;
				end
				`MULDIVMode_DIV: begin
					Start = 1'b1;
				end
				`MULDIVMode_DIVU: begin
					Start = 1'b1;
				end
				default: begin	
					Start = 1'b0;
				end
			endcase
	end //����߼�
	
	always @(posedge clk) begin //ͬ����λ //ʱ���߼���״̬ת�ƣ��Ĵ�����ֵ
		if (reset == 1'b1) begin
			cnt = 4'd0;//����������
			Busy = 1'b0;
		end else begin
			if (Start == 1'b1) begin
				case(mode)
					`MULDIVMode_MULT: begin
						ans <= $signed(A) * $signed(B);
						cnt <= 4'd4; //5 - 1
					end
				`	MULDIVMode_MULTU: begin
						ans <= A * B;
						cnt <= 4'd4;//10 - 1
					end
					`MULDIVMode_DIV: begin
						ans[31:0] <= (B == 0) ? init_64 : $signed(A) / $signed(B);
						ans[63:32] <= (B == 0) ? init_64 : $signed(A) % $signed(B); //fraction
						cnt <= 4'd9;
					end
					`MULDIVMode_DIVU: begin
						ans[31:0] <= (B == 0) ? init_64 : A / B;
						ans[63:32] <= (B == 0) ? init_64 : A % B;
						cnt <= 4'd9;
					end
					default: begin	
						ans <= ans; //not ���
				end
			endcase
		end else begin //û�м���Ļ�
				case(mode)
					`MULDIVMode_MTHI: begin
						HI <= A;//rs
					end
					`MULDIVMode_MTLO: begin
						LO <= A;//rs
					end 
					default: begin
						LO <= ans[31:0];
						HI <= ans[63:32]; //ˢ�½��
					end
				endcase
				cnt <= (cnt > 4'd0) ? cnt - 4'd1 : 4'd0; //��������ֵ
			end
		end
		if (cnt > 4'd0 || Start ) begin //STATE MATHINE 
			Busy <= 1'b1;
		end else begin
			Busy <= 1'b0;
		end
	end
	assign out = (HILOSel == `MULDIV_HIGH) ? HI : LO ;//ѡ������ź�//�궨��ǧ���ӷֺ�	
endmodule 