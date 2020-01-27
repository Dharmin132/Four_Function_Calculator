-- Module Name: BCD_inout - Behavioral 
-- Course : EL 203
-- Project : Q-10- Four function decimal calculator
-- Author : Group 3.10
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use ieee.numeric_std.all;

entity BCD_inout is
port (
			sin1 : in std_logic ;
			bcd1 : in std_logic_vector(31 downto 0);
			op   : in std_logic_vector(1 downto 0);
			sin2 : in std_logic ;
			bcd2 : in std_logic_vector(31 downto 0);
--			rca  : in std_logic_vector(1 downto 0);
	--		lca  : in std_logic_vector(1 downto 0);
		--	rcb  : in std_logic_vector(1 downto 0);
			--lcb  : in std_logic_vector(1 downto 0);
			sinout : out std_logic;
			bcdout : out std_logic_vector(31 downto 0);
			fp     : inout std_logic_vector(3 downto 0)
			);
			
end BCD_inout;

architecture Behavioral of BCD_inout is

component calculations is

    Port(   asin : in std_logic;  
				a : inout  STD_LOGIC_VECTOR (31 downto 0);
          --  lca : in  STD_LOGIC_VECTOR (1 downto 0);
          --  rca : in  STD_LOGIC_VECTOR (1 downto 0);
			 op : in STD_LOGIC_VECTOR (1 downto 0);
		   bsin : in std_logic;
              b : inout  STD_LOGIC_VECTOR (31 downto 0);
          --  lcb : in STD_LOGIC_VECTOR (1 downto 0);
          --  rcb : in STD_LOGIC_VECTOR (1 downto 0);
			sin : out std_logic;
			  c : out STD_LOGIC_VECTOR(31 downto 0);
			 fp : out std_logic_vector(3 downto 0)
		);
end component;

signal t1,t2,t3,t4,t5,t6 :  std_logic_vector(31 downto 0);
signal bina,binb :  std_logic_vector(31 downto 0);

begin

--f1:bcd2bin port map (a,bina);
--f2:bcd2bin port map (b,binb);
f3 : calculations port map (sin1,bcd1,op,sin2,bcd2,sinout,t1,fp);
--f4 : bin2bcd port map (t1,t2);
        		  
process (t1,fp)
begin 

if (fp="0011") then
    t2<=std_logic_vector(shift_right(unsigned(t1),4));
elsif (fp="0100") then
	t2<=std_logic_vector(shift_right(unsigned(t1),8));

end if;


end process;


bcdout<=t1;
end Behavioral;