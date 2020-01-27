-- Module Name: thirtytwobit_adder - Behavioral 
-- Course : EL 203
-- Project : Q-10- Four function decimal calculator
-- Author : Group 3.10
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity thirtytwobit_adder is
    Port ( x : in  STD_LOGIC_VECTOR (31 downto 0);
           y : in  STD_LOGIC_VECTOR (31 downto 0);
           cin : in  STD_LOGIC;
           cout : out  STD_LOGIC;
           s : out  STD_LOGIC_VECTOR (31 downto 0));
end thirtytwobit_adder;

architecture Behavioral of thirtytwobit_adder is

component fourbit_adder is
    Port ( x : in  STD_LOGIC_VECTOR (3 downto 0);
           y : in  STD_LOGIC_VECTOR (3 downto 0);
           cin : in  STD_LOGIC;
           cout : out  STD_LOGIC;
           s : out  STD_LOGIC_VECTOR (3 downto 0));
end component;

signal r1,c : STD_LOGIC_VECTOR (6 downto 0);
begin

	F1: fourbit_adder port map(x( 3 downto  0),y( 3 downto  0),cin ,c(0),s( 3 downto  0));
	F2: fourbit_adder port map(x( 7 downto  4),y( 7 downto  4),c(0),c(1),s( 7 downto  4));
	F3: fourbit_adder port map(x(11 downto  8),y(11 downto  8),c(1),c(2),s(11 downto  8));
	F4: fourbit_adder port map(x(15 downto 12),y(15 downto 12),c(2),c(3),s(15 downto 12));
	F5: fourbit_adder port map(x(19 downto 16),y(19 downto 16),c(3),c(4),s(19 downto 16));
	F6: fourbit_adder port map(x(23 downto 20),y(23 downto 20),c(4),c(5),s(23 downto 20));
	F7: fourbit_adder port map(x(27 downto 24),y(27 downto 24),c(5),c(6),s(27 downto 24));
	F8: fourbit_adder port map(x(31 downto 28),y(31 downto 28),c(6),cout,s(31 downto 28));

end Behavioral;