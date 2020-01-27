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
			bcd1 : in std_logic_vector(31 downto 0);
			bcd2 : in std_logic_vector(31 downto 0);
			sin1 : in std_logic ;
			sin2 : in std_logic ;
			rca  : in std_logic_vector(3 downto 0);
			lca  : in std_logic_vector(3 downto 0);
			rcb  : in std_logic_vector(3 downto 0);
			lcb  : in std_logic_vector(3 downto 0);
			op   : in std_logic_vector(3 downto 0);
			bcdout : out std_logic_vector(31 downto 0);
			sinout : out std_logic;
			fp     : inout std_logic_vector(3 downto 0)
			);
			
end BCD_inout;

architecture Behavioral of BCD_inout is

component calling_mod is

    Port ( a : inout  STD_LOGIC_VECTOR (31 downto 0);
           lca : in  STD_LOGIC_VECTOR (1 downto 0);
           rca : in  STD_LOGIC_VECTOR (1 downto 0);
			  asin : in std_logic;
           b : inout  STD_LOGIC_VECTOR (31 downto 0);
           lcb : in STD_LOGIC_VECTOR (1 downto 0);
           rcb : in STD_LOGIC_VECTOR (1 downto 0);
			  bsin : in std_logic;
			  c: inout STD_LOGIC_VECTOR(31 downto 0);
			  op: in STD_LOGIC_VECTOR (1 downto 0);
			  sin : out std_logic;
			  fp : out std_logic_vector(3 downto 0)
			  );
			  

end component;

signal t1,t2,t3,t4,t5,t6 :  std_logic_vector(31 downto 0);
signal bina,binb :  std_logic_vector(31 downto 0);

begin

--f1:bcd2bin port map (a,bina);
--f2:bcd2bin port map (b,binb);
f3 : calling_mod port map (bina,lca,rca,sin1,binb,lcb,rcb,sin2,t1,op,sinout,fp);
--f4 : bin2bcd port map (t1,t2);
        		  
process (t1,fp)
begin 

if (fp="0011") then 
    t2<=std_logic_vector(shift_right(unsigned(t1),4));
elsif (fp="0100") then
	t2<=std_logic_vector(shift_right(unsigned(t1),8));

end if;


end process;



end Behavioral;