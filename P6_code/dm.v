`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:45:52 10/29/2022 
// Design Name: 
// Module Name:    dm 
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
module BE(
	.MemWrtie(MemWrite), //I
	.MEMALUOut(MEMALUOut), //I
	.m_data_rdata(m_data_rdata), //I
	.m_data_byteen(m_data_byteen), //O
	.MEMRD(MEMRD) //O
	);
);

	reg [31:0] mem[0:3071];
	parameter init = 32'h0000_0000;
	integer i;
	
	wire [31:0] DataIn;
	wire [31:0] lbData;
	wire [31:0] sbData;
	wire [31:0] lhData;
	wire [31:0] shData;
	wire [31:0] lhuData;
	wire [31:0] lbuData;
	wire [31:0] DMWord;
 
	assign DMWord = mem[Addr[13:2]];


	always@(posedge clk) begin //ͬ����λ
		if (reset == 1'b1) begin
			for (i = 0; i < 3072; i = i + 1) begin
				mem[i] <= init;
			end
		end else begin
		//$display("@%h: *%h <= %h", pc, addr, dataIn);
			case(MemWrite) 
				1'b1: begin mem[Addr[13:2]] <= DataIn; //����дû����
				$display("%d@%h: *%h <= %h", $time, PC, Addr, DataIn);
				//$display("@%h: *%h <= %h",  pc, fullAddress, dataIn);
				//$display("%d@%h: *%h <= %h", $time, pc, addr, din);
				end
				default: ;
			endcase
		end
	end

	
	
		//special lb, sb
	lbgen lbgen(
	.DMWord(DMWord),
	.Byte(Addr[1:0]), 
	.lbData(lbData)
	);	
	
		
	lbugen lbugen(
	.DMWord(DMWord),
	.Byte(Addr[1:0]),
	.lbuData(lbuData)
	);
	
	lhgen lhgen(
	.DMWord(DMWord), //
	.Byte_1(Addr[1:1]), //�ֽ�ѡ����
	.lhData(lhData)
    );

	lhugen lhugen(
	.DMWord(DMWord), //
	.Byte_1(Addr[1:1]), //�ֽ�ѡ����
	.lhuData(lhuData)
   );

	sbgen sbgen(
	.DMWord(DMWord),
	.RD2(RD2),
	.Byte(Addr[1:0]), 
	.sbData(sbData)
	);
	
	shgen shgen(
	.DMWord(DMWord),
	.RD2(RD2), //��ҪGRF�ڶ������
	.Byte_1(Addr[1:1]), //�ֽ�ѡ����
	.shData(shData)
    );
	//����д��grf������ input [1:0] Byte, //�ֽ�ѡ���� output [31:0] lbData
	mux16 mux16_DataOut(
		.x0(DMWord), 
		.x1(lbData), 
		.x2(lhData),
		.x3(lbuData),
		.x4(lhuData),
		.x5(init),
		.x6(init),
		.x7(init),
		.x8(init),
		.x9(init),
		.x10(init),
		.x11(init),
		.x12(init),
		.x13(init),
		.x14(init),
		.x15(init),
		.sel(DMMode), 
		.result(DataOut) //ѡ���������
	);
	//����д��DM������
	mux16 mux16_DataIn( //Generate Write Data
		.x0(RD2),
		.x1(sbData),
		.x2(shData),
		.x3(init),
		.x4(init),
		.x5(init),
		.x6(init),
		.x7(init),
		.x8(init),
		.x9(init),
		.x10(init),
		.x11(init),
		.x12(init),
		.x13(init),
		.x14(init),
		.x15(init),
		.sel(DMMode),		
		.result(DataIn) //ѡ��д������
	);	
	

endmodule 
