	component DespertadorCPU is
		port (
			btnapagar_export : in  std_logic                    := 'X'; -- export
			btnhora_export   : in  std_logic                    := 'X'; -- export
			btnmin_export    : in  std_logic                    := 'X'; -- export
			buzzer_export    : out std_logic;                           -- export
			clk_clk          : in  std_logic                    := 'X'; -- clk
			hora1_export     : out std_logic_vector(6 downto 0);        -- export
			hora2_export     : out std_logic_vector(6 downto 0);        -- export
			min1_export      : out std_logic_vector(6 downto 0);        -- export
			min2_export      : out std_logic_vector(6 downto 0);        -- export
			reset_reset_n    : in  std_logic                    := 'X'; -- reset_n
			swinicio_export  : in  std_logic                    := 'X'; -- export
			swmodo_export    : in  std_logic                    := 'X'  -- export
		);
	end component DespertadorCPU;

	u0 : component DespertadorCPU
		port map (
			btnapagar_export => CONNECTED_TO_btnapagar_export, -- btnapagar.export
			btnhora_export   => CONNECTED_TO_btnhora_export,   --   btnhora.export
			btnmin_export    => CONNECTED_TO_btnmin_export,    --    btnmin.export
			buzzer_export    => CONNECTED_TO_buzzer_export,    --    buzzer.export
			clk_clk          => CONNECTED_TO_clk_clk,          --       clk.clk
			hora1_export     => CONNECTED_TO_hora1_export,     --     hora1.export
			hora2_export     => CONNECTED_TO_hora2_export,     --     hora2.export
			min1_export      => CONNECTED_TO_min1_export,      --      min1.export
			min2_export      => CONNECTED_TO_min2_export,      --      min2.export
			reset_reset_n    => CONNECTED_TO_reset_reset_n,    --     reset.reset_n
			swinicio_export  => CONNECTED_TO_swinicio_export,  --  swinicio.export
			swmodo_export    => CONNECTED_TO_swmodo_export     --    swmodo.export
		);

