
#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(void) {}

Zombie::Zombie(std::string name)
{
	this->_name = name;
}

Zombie::Zombie(const Zombie &zombie)
{
	if (this != &zombie)
	{
		this->_name = zombie._name;
	}
}

Zombie & Zombie::operator = (const Zombie &zombie)
{
	if (this != &zombie)
	{
		this->_name = zombie._name;
	}
	return (*this);
}

Zombie::~Zombie(void)
{
	std::cout << this->_name << " \033[31mis dead\033[0m" << std::endl ;
}

void	Zombie::announce(void) const
{
	std::cout << "\033[32m" << this->_name  << "\033[0m" << \
	":BraiiiiiiinnnzzzZ..." << std::endl;
}