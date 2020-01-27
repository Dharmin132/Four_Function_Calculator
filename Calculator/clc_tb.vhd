
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
ENTITY clc_tb IS
END clc_tb;
 
ARCHITECTURE behavior OF clc_tb IS 
 
    COMPONENT calculations
    PORT(
         asin : IN  std_logic;
         a : INOUT  std_logic_vector(31 downto 0);
         op : IN  std_logic_vector(1 downto 0);
         bsin : IN  std_logic;
         b : INOUT  std_logic_vector(31 downto 0);
         sin : OUT  std_logic;
         c : OUT  std_logic_vector(31 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal asin : std_logic := '0';
   signal op : std_logic_vector(1 downto 0) := (others => '0');
   signal bsin : std_logic := '0';

	--BiDirs
   signal a : std_logic_vector(31 downto 0);
   signal b : std_logic_vector(31 downto 0);

 	--Outputs
   signal sin : std_logic;
   signal c : std_logic_vector(31 downto 0);
   -- No clocks detected in port list. Replace clk below with 
   -- appropriate port name 
 
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: calculations PORT MAP (
          asin => asin,
          a => a,
          op => op,
          bsin => bsin,
          b => b,
          sin => sin,
          c => c
        );
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	
		
		
		asin<='1';
		a<="00000000000000000000000000001000";
		op<="00";
		bsin<='0';
		b<="00000000000000000000000000000010";
      wait for clk_period*10;

      -- insert stimulus here 

      wait;
   end process;

END;
