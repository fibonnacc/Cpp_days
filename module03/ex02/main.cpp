#include "FragTrap.hpp"
#include <iostream>

int main()
{
    FragTrap st("Hicham");
    st.attack("enemy");
    st.takeDamage(7);
    st.beRepaired(6);
    st.highFivesGuys();
    return 0;
}
