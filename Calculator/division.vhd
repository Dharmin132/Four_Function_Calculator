----------------------------------------------------------------------------------
-- Module Name: division - Function 
-- Course : EL 203
-- Project : Q-10- Four function decimal calculator
-- Author : Group 3.10
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

function division(a:std_logic_Vector(31 downto 0); b: std_logic_vector(31 downto 0)) return std_logic_vector is
			variable x,y: integer;
			variable ans : std_logic_vector(31 downto 0) := "00000000000000000000000000000000";
			variable temp1,temp2: integer ;
			variable result :  std_logic_vector (31 downto 0);
			begin
			x := CONV_INTEGER(a);
			y := CONV_INTEGER(b);
			
			temp1:=x;
			temp2:=y;
			
			for i in 23 downto 0 loop
				if (temp1>=temp2 * 2**i) then
					result(i):= '1';
					temp1:= temp1- temp2 * 2**i;
				else 
					result(i):= '0';
				end if;
			end loop;
			
			result(31 downto 24):="00000000";
			return result;
		end division;