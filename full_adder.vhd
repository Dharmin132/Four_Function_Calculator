-- Module Name: full_adder - Behavioral 
-- Course : EL 203
-- Project : Q-10- Four function decimal calculator
-- Author : Group 3.10
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity full_adder is
    Port ( x : in  STD_LOGIC;
           y : in  STD_LOGIC;
           cin : in  STD_LOGIC;
           cout : out  STD_LOGIC;
           s : out  STD_LOGIC);
end full_adder;

architecture Behavioral of full_adder is

begin
	s<= x XOR y XOR cin;
	cout <= ((x XOR y) AND cin ) OR (x AND y);

end Behavioral;