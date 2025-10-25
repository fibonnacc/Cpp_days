#include "ScavTrap.hpp"
#include <iostream>

int main()
{
    ScavTrap st("Hicham");
    ClapTrap d1("said");
    st.attack("said");
    st.takeDamage(4);
    st.beRepaired(5);
    st.guardGate();
    return 0;
}
