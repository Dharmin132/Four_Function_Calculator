-- Module Name: mult64 - Behavioral 
-- Course : EL 203
-- Project : Q-10- Four function decimal calculator
-- Author : Group 3.10
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity multiplication is
	Port ( --rst:in std_logic; 
	a : in std_logic_vector(31 downto 0);
	b : in std_logic_vector(31 downto 0);
	prod : inout std_logic_vector(31 downto 0));
end multiplication;

architecture Behavioral of multiplication is
                                                
constant n:integer :=16;
subtype plary is std_logic_vector(n-1 downto 0);
type pary is array(0 to n) of plary;
signal pp,pc,ps:pary;
signal t11,t12,t13: std_logic_vector(31 downto 0);

begin
		pgen:for j in 0 to n-1 generate
			pgen1:for k in 0 to n-1 generate
				pp(j)(k)<=a(k) and b(j);
			end generate;
			pc(0)(j)<='0';
		end generate;

		ps(0)<=pp(0);
		prod(0)<=pp(0)(0);
		addr:for j in 1 to n-1 generate
			addc:for k in 0 to n-2 generate
				ps(j)(k)<=pp(j)(k) xor pc(j-1)(k) xor ps(j-1)(k+1);
				pc(j)(k)<=(pp(j)(k) and pc(j-1)(k)) or
				(pp(j)(k) and ps(j-1)(k+1)) or
				(pc(j-1)(k)and ps(j-1)(k+1));
			end generate;
			prod(j)<=ps(j)(0);
			t11<=prod;
			ps(j)(n-1)<=pp(j)(n-1); 
		end generate;
		
		pc(n)(0)<='0';
		
		addlast:for k in 1 to n-1 generate
			ps(n)(k)<=pc(n)(k-1) xor pc(n-1)(k-1) xor ps(n-1)(k);
			pc(n)(k)<=(pc(n)(k-1) and pc(n-1)(k-1)) or
			(pc(n)(k-1) and ps(n-1)(k)) or
			(pc(n-1)(k-1)and ps(n-1)(k));
		end generate;

	prod(2*n-1)<=pc(n)(n-1);
	prod(2*n-2 downto n)<=ps(n)(n-1 downto 1);
	
end Behavioral;