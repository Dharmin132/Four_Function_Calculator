-- Module Name: Calculations - Behavioral 
-- Course : EL 203
-- Project : Q-10- Four function decimal calculator
-- Author : Group 3.10
-----------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity calculations is

    Port(     a : inout  STD_LOGIC_VECTOR (31 downto 0);
            lca : in  STD_LOGIC_VECTOR (1 downto 0);
            rca : in  STD_LOGIC_VECTOR (1 downto 0);
		   asin : in std_logic;
              b : inout  STD_LOGIC_VECTOR (31 downto 0);
            lcb : in STD_LOGIC_VECTOR (1 downto 0);
            rcb : in STD_LOGIC_VECTOR (1 downto 0);
		   bsin : in std_logic;
			  c : inout STD_LOGIC_VECTOR(31 downto 0);
			 op : in STD_LOGIC_VECTOR (1 downto 0);
			sin : out std_logic;
			 fp : out std_logic_vector(3 downto 0 )
		);
			  
end calculations;

architecture Behavioral of calculations is


component thirtytwobit_adder is
    Port (    a : in  STD_LOGIC_VECTOR (31 downto 0);
              b : in  STD_LOGIC_VECTOR (31 downto 0);
            cin : in  STD_LOGIC;
           cout : out  STD_LOGIC;
              s : out  STD_LOGIC_VECTOR (31 downto 0)
			  );
end component;

component sub is
 port(
        a: in std_logic_vector(31 downto 0);
        b: in std_logic_vector(31 downto 0);
		c : out std_logic_vector(31 downto 0);
		csin : out std_logic 
	   );
end component;


component mult64 is
	Port ( 
	a : in std_logic_vector(31 downto 0);
	b : in std_logic_vector(31 downto 0);
	prod : out std_logic_vector(31 downto 0));
end component;


function div(a : std_logic_Vector(31 downto 0); b: std_logic_vector(31 downto 0)) return std_logic_vector is
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
end div;

signal co1,co2,co3: std_logic;
signal t1,t2,t3,t4: std_logic_vector(31 downto 0);

begin

f1: thirtytwobit_adder port map(a,b,'0',co1,t1);
f2: sub port map(b,a,t2,co2);
f3: sub port map(a,b,t3,co3);
f4: mult64 port map(a,b,t4);
f5: div_binary(a,b);

process (t1,t2,t3)
	begin
		if(op="00") then
			if asin=bsin then
				c<=t1;
				sin<=asin;
			else
				if(asin='1') then
					c<=t2;
					sin<=co2;
				else
					c<=t3;
					sin<=co3;
				end if;
			end if;

            fp<="0010";
            
		elsif (op="01") then
        	if asin=bsin then
				if(asin='1') then
					c<=t2;
					sin<=co2;
				else
					c<=t3;
					sin<=co3;
				end if;
			else 
				if(asin='1') then
					c<=t1;
					sin<='1';  -- 1 is negative   0 is positive
				else
					c<=t1;
					sin<='0';
				end if;
			end if;

            fp<="0010";
            
		elsif (op="10") then
			if asin=bsin then
				c<=t4;
			   sin<='0';
				
			else	
				c<=t4;
				sin<='1';
			end if;
			fp<="0100";
		end if; 
		
		
	end process;
end Behavioral;