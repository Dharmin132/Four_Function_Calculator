-- Module Name: BCD_to_binary - Behavioral 
-- Course : EL 203
-- Project : Q-10- Four function decimal calculator
-- Author : Group 3.10
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.std_logic_unsigned.all;
use ieee.numeric_std.all;

entity BCD_to_binary is
    Port (  bin : out unsigned (14 downto 0);
            clk : in std_logic
             d0 : in std_logic
             d1 : in std_logic
             d2 : in std_logic
             d3 : in std_logic
             d4 : in std_logic
             d5 : in std_logic
             d6 : in std_logic
             d7 : in std_logic
             d8 : in std_logic
             d9 : in std_logic
              E : in std_logic );
end BCD_to_binary;

architecture Behavioral of BCD_to_binary is

signal bcd : unsigned(31 downto 0)   := "00000000000000000000000000000000";
signal bin_t : unsigned (31 downto 0) := "00000000000000000000000000000000";
signal temp1, temp2, temp3 : unsigned (3 downto 0) := "1111";
signal counter : integer := 32;
signal check, temp10, temp11, temp20, temp30, err, start, done : STD_LOGIC := '0';
signal    s : STD_LOGIC := '1';
signal    c : STD_LOGIC := '0';
signal   s1 : STD_LOGIC := '0';
signal bits : std_logic_vector (2 downto 0);

begin

    bits(0) <= NOT ((temp1(1) OR temp1(2)) AND temp1(3));
    bits(1) <= NOT ((temp2(1) OR temp2(2)) AND temp2(3));
    bits(2) <= NOT ((temp3(1) OR temp3(2)) AND temp3(3));
    check <= bits(0) AND bits(1) AND bits(2);
    temp10 <= NOT (temp1(0) OR temp1(1) OR temp1(2) OR temp1(3));
    temp11 <= NOT ((NOT temp1(0)) OR temp1(1) OR temp1(2) OR temp1(3));
    temp20 <= NOT (temp2(0) OR temp2(1) OR temp2(2) OR temp2(3));
    temp30 <= NOT (temp3(0) OR temp3(1) OR temp3(2) OR temp3(3));
    err <= check AND NOT (temp10 OR (temp11 AND temp20 AND temp30));

    process(clk, bits)
    begin
            
        if(rising_edge(clk)) then

            if(bits = "000") then
                if(d0 = '1') then
                    temp1 <= "0000";
                elsif(d1 = '1') then
                    temp1 <= "0001";
                elsif(d2 = '1') then
                    temp1 <= "0010";
                elsif(d3 = '1') then
                    temp1 <= "0011";
                elsif(d4 = '1') then
                    temp1 <= "0100";
                elsif(d5 = '1') then
                    temp1 <= "0101";
                elsif(d6 = '1') then
                    temp1 <= "0110";
                elsif(d7 = '1') then
                    temp1 <= "0111";
                elsif(d8 = '1') then
                    temp1 <= "1000";
                elsif(d9 = '1') then
                    temp1 <= "1001";
                end if;

            elsif(bits = "001") then
                if(d0 = '1') then
                    temp2 <= "0000";
                elsif(d1 = '1') then
                    temp2 <= "0001";
                elsif(d2 = '1') then
                    temp2 <= "0010";
                elsif(d3 = '1') then
                    temp2 <= "0011";
                elsif(d4 = '1') then
                    temp2 <= "0100";
                elsif(d5 = '1') then
                    temp2 <= "0101";
                elsif(d6 = '1') then
                    temp2 <= "0110";
                elsif(d7 = '1') then
                    temp2 <= "0111";
                elsif(d8 = '1') then
                    temp2 <= "1000";
                elsif(d9 = '1') then
                    temp2 <= "1001";
                end if;

            elsif(bits = "011") then
                if(d0 = '1') then
                    temp3 <= "0000";
                elsif(d1 = '1') then
                    temp3 <= "0001";
                elsif(d2 = '1') then
                    temp3 <= "0010";
                elsif(d3 = '1') then
                    temp3 <= "0011";
                elsif(d4 = '1') then
                    temp3 <= "0100";
                elsif(d5 = '1') then
                    temp3 <= "0101";
                elsif(d6 = '1') then
                    temp3 <= "0110";
                elsif(d7 = '1') then
                    temp3 <= "0111";
                elsif(d8 = '1') then
                    temp3 <= "1000";
                elsif(d9 = '1') then
                    temp3 <= "1001";
                end if;
            end if;
        end if;
    end process;

    process(clk, E, start, temp1, temp2, temp3, bcd, bin_t, counter)
    begin
            
        if(rising_edge(clk)) then

            if(E = '1') then
                if(start = '0')then
                    if(bits = "001") then
                        bcd (7 downto 4) <= temp1;
                        start <= '1';
                    
                    elsif(bits = "011") then
                        bcd(11 downto 8) <= temp1;
                        bcd( 7 downto 4) <= temp2;
                        start <= '1';

                    elsif(bits = "111") then
                        if(err = '0') then
                            bcd(15 downto 12) <= temp1;
                            bcd(11 downto 8 ) <= temp2;
                            bcd( 7 downto 4 ) <= temp3;
                            start <= '1';
                        end if;
                    end if;
                end if;
            end if;

            if(start = '1')then
                if(counter > 0)then
                    if(s = '1')then
                    bin_t(0) <= bin_t(1);
                    bin_t(1) <= bin_t(2);
                    bin_t(2) <= bin_t(3);
                    bin_t(3) <= bin_t(4);
                    bin_t(4) <= bin_t(5);
                    bin_t(5) <= bin_t(6);
                    bin_t(6) <= bin_t(7);
                    bin_t(7) <= bin_t(8);
                    bin_t(8) <= bin_t(9);
                    bin_t(9) <= bin_t(10);
                    bin_t(10) <= bin_t(11);
                    bin_t(11) <= bin_t(12);
                    bin_t(12) <= bin_t(13);
                    bin_t(13) <= bin_t(14);
                    bin_t(14) <= bcd(0);

                    bcd(0) <= bcd(1);
                    bcd(1) <= bcd(2);
                    bcd(2) <= bcd(3);
                    bcd(3) <= bcd(4);
                    bcd(4) <= bcd(5);
                    bcd(5) <= bcd(6);
                    bcd(6) <= bcd(7);
                    bcd(7) <= bcd(8);
                    bcd(8) <= bcd(9);
                    bcd(9) <= bcd(10);
                    bcd(10) <= bcd(11);
                    bcd(11) <= bcd(12);
                    bcd(12) <= bcd(13);
                    bcd(13) <= bcd(14);
                    bcd(14) <= bcd(15);
                    bcd(15) <= '0';

                    s <= '0';
                    c <= '1';

                    else
                        if(c = '1')then
                            if (bcd( 3 downto 0 ) >= "1000")then
                                bcd( 3 downto 0 ) <= bcd( 3 downto 0 ) - "0011";
                            end if;

                            if (bcd( 7 downto 4 ) >= "1000")then
                                bcd( 7 downto 4 ) <= bcd( 7 downto 4 ) - "0011";
                            end if;
                            
                            if (bcd(11 downto 8 ) >= "1000")then
                                bcd(11 downto 8 ) <= bcd(11 downto 8 ) - "0011";
                            end if;

                        counter <= counter-1;
                        s <= '1';
                        c <= '0';

                        end if;
                    end if;

                elsif(counter = 0)then
                    bin <= bin_t;
                    done <= '1';
                    start <= '0';
                    counter <= 15;
                end if;
            end if;
        end if;
    end process;
end Behavioral;