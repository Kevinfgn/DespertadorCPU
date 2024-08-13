module DespertadorCPU_inst(input btnhora, btnmin, btnapagar, clk, reset, swinicio, swmodo,
										output [6:0] hora1, hora2, min1, min2, output buzzer );
	DespertadorCPU u0 (
		.btnapagar_export (btnapagar), // btnapagar.export
		.btnhora_export   (btnhora),   //   btnhora.export
		.btnmin_export    (btnmin),    //    btnmin.export
		.buzzer_export    (buzzer),    //    buzzer.export
		.clk_clk          (clk),          //       clk.clk
		.hora1_export     (hora1),     //     hora1.export
		.hora2_export     (hora2),     //     hora2.export
		.min1_export      (min1),      //      min1.export
		.min2_export      (min2),      //      min2.export
		.reset_reset_n    (reset),    //     reset.reset_n
		.swmodo_export    (swmodo),    //    swmodo.export
		.swinicio_export  (swinicio)   //  swinicio.export
	);

endmodule
