library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity test is
     Port(
         a: in std_logic;
         b: in std_logic;
         c: out std_logic
     );
end test;

architecture Behavioral of test is
begin

    c <= a and b;

end Behavioral;
