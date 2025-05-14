
module DespertadorCPU (
	btnapagar_export,
	btnhora_export,
	btnmin_export,
	buzzer_export,
	clk_clk,
	hora1_export,
	hora2_export,
	min1_export,
	min2_export,
	reset_reset_n,
	swinicio_export,
	swmodo_export);	

	input		btnapagar_export;
	input		btnhora_export;
	input		btnmin_export;
	output		buzzer_export;
	input		clk_clk;
	output	[6:0]	hora1_export;
	output	[6:0]	hora2_export;
	output	[6:0]	min1_export;
	output	[6:0]	min2_export;
	input		reset_reset_n;
	input		swinicio_export;
	input		swmodo_export;
endmodule
