-- Module Name: fourbit_adder - Behavioral 
-- Course : EL 203
-- Project : Q-10- Four function decimal calculator
-- Author : Group 3.10
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity fourbit_adder is
    Port (    x : in  STD_LOGIC_VECTOR (3 downto 0);
              y : in  STD_LOGIC_VECTOR (3 downto 0);
            cin : in  STD_LOGIC;
           cout : out  STD_LOGIC;
              s : out  STD_LOGIC_VECTOR (3 downto 0));
end fourbit_adder;

architecture Behavioral of fourbit_adder is
signal r1,c0,c1,c2 : STD_LOGIC;

component full_adder is
    Port ( x : in  STD_LOGIC;
           y : in  STD_LOGIC;
           cin : in  STD_LOGIC;
           cout : out  STD_LOGIC;
           s : out  STD_LOGIC);
end component;

begin

	F1: full_adder port map(x(0),y(0),cin,c0,s(0));
	F2: full_adder port map(x(1),y(1),c0,c1,s(1));
	F3: full_adder port map(x(2),y(2),c1,c2,s(2));
	F4: full_adder port map(x(3),y(3),c2,cout,s(3));

end Behavioral;