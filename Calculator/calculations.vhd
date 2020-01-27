-- Module Name: Calculations - Behavioral 
-- Course : EL 203
-- Project : Q-10- Four function decimal calculator
-- Author : Group 3.10
-----------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity calculations is

    Port(   asin : in std_logic;  
				a : inout  STD_LOGIC_VECTOR (31 downto 0);
			 op : in STD_LOGIC_VECTOR (1 downto 0);
		   bsin : in std_logic;
              b : inout  STD_LOGIC_VECTOR (31 downto 0);
			sin : out std_logic;
			Anode : out STD_LOGIC_VECTOR (7 downto 0);-- 4 Anode signals
           LED : out STD_LOGIC_VECTOR (6 downto 0);
			 -- c : out STD_LOGIC_VECTOR(31 downto 0);
			  clk : in std_logic
		);
			  
end calculations;

architecture Behavioral of calculations is

	 component seven_segment_display_VHDL is
    Port ( clock_100Mhz : in STD_LOGIC;-- 100Mhz clock on Basys 3 FPGA board
           reset : in STD_LOGIC; -- reset
			  displayed_number: in STD_LOGIC_VECTOR (31 downto 0);
           Anode_Activate : out STD_LOGIC_VECTOR (7 downto 0);-- 4 Anode signals
           LED_out : out STD_LOGIC_VECTOR (6 downto 0));-- Cathode patterns of 7-segment display
	end component;

component thirtytwobit_adder is
    Port (    x : in  STD_LOGIC_VECTOR (31 downto 0);
              y : in  STD_LOGIC_VECTOR (31 downto 0);
            cin : in  STD_LOGIC;
           cout : out  STD_LOGIC;
              s : out  STD_LOGIC_VECTOR (31 downto 0)
			  );
end component;

component subtraction is
 port(
        a: in std_logic_vector(31 downto 0);
        b: in std_logic_vector(31 downto 0);
		c : out std_logic_vector(31 downto 0);
		csin : out std_logic 
	   );
end component;


component multiplication is
	Port ( 
	a : in std_logic_vector(31 downto 0);
	b : in std_logic_vector(31 downto 0);
	prod : inout std_logic_vector(31 downto 0));
end component;


function division(a : std_logic_Vector(31 downto 0); b: std_logic_vector(31 downto 0)) return std_logic_vector is
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
		
		if (b="00000000000000000000000000000000") then
			return "000000000000000000000000000000000000000000000";
		else
			return result;
		end if;
			
end division;

signal c : STD_LOGIC_VECTOR(31 downto 0);
signal co1,co2,co3: std_logic;
signal t1,t2,t3,t4,t5: std_logic_vector(31 downto 0);
signal disp: STD_LOGIC_VECTOR (31 downto 0);

begin
p1: seven_segment_display_VHDL port map(clk,'0',disp,Anode,LED);
f1: thirtytwobit_adder port map(a,b,'0',co1,t1);
f2: subtraction port map(b,a,t2,co2);
f3: subtraction port map(a,b,t3,co3);
f4: multiplication port map(a,b,t4);
t5 <= division(a,b);

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
					sin<='1';
				else
					c<=t1;
					sin<='0';
				end if;
			end if;
            
		elsif (op="10") then
			if(a="00000000000000000000000000000000" or b<="00000000000000000000000000000000") then
				sin<='0';
				c<="00000000000000000000000000000000";
			else
				if asin=bsin then
					c<=t4;
					sin<='0';
					
				else	
					c<=t4;
					sin<='1';
				end if;
			end if;
			
		elsif (op="11") then
		   if asin=bsin then
				c<=t5;
			   sin<='0';
				disp<=c(27 downto 0) & "1011";
			else
			
				c<=t5;
				sin<='1';
				disp<=c(27 downto 0) & "1010";
			end if;
		--displayed_number<=c(27 downto 0);
		
		end if; 
		
		
	end process;
end Behavioral;