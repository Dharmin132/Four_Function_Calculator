-- Module Name: sub - Behavioral 
-- Course : EL 203
-- Project : Q-10- Four function decimal calculator
-- Author : Group 3.10
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity sub is
 port(
        a: in std_logic_vector(31 downto 0);
        b: in std_logic_vector(31 downto 0);
		  c : out std_logic_vector(31 downto 0);
		  csin : out std_logic 
	   );
end sub;


architecture Behavioral of sub is

component thirtytwobit_adder is
    Port ( a : in  STD_LOGIC_VECTOR (31 downto 0);
           b : in  STD_LOGIC_VECTOR (31 downto 0);
           cin : in  STD_LOGIC;
           cout : out  STD_LOGIC;
           s : out  STD_LOGIC_VECTOR (31 downto 0));
end component;
signal comp,comp2,comp3,comp4: std_logic_vector(31 downto 0);
signal add1: std_logic_vector(31 downto 0);
signal co,ci,co2 : std_logic;


begin

	comp<= not b;
	add1<="00000000000000000000000000000000";
	f1 : thirtytwobit_adder port map(comp,a,'1',co,comp2);
	
	comp4 <= not comp2;
   f2 : thirtytwobit_adder port map(comp4,add1,'1',co2,comp3);
  process 
   begin 
	 if co='1' then
		c<=comp2;
		csin<='0';
    else 
	   c<=comp3;
		csin<='1';
	 end if;
	 wait for 100ns; 
  end process;
  
  
end Behavioral;