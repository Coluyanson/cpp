
#include "Animal.hpp"
#include "Cat.hpp"
#include <iostream>

// Default constructor

Cat::Cat() : Animal()
{
	this->_type = "Cat";
	std::cout << "Default constructor called for " << this->_type << std::endl;
}

// Copy constructor

Cat::Cat( const Cat &cat ) : Animal( cat )
{
	if (this != &cat)
		*this = cat;
	std::cout << "Copy constructor called for " << this->_type << std::endl;
}

// Copy assignment operator

Cat		&Cat::operator=( const Cat &cat )
{
	if (this != &cat)
		this->_type = cat._type;
	std::cout << "Copy assignment operator called for " << this->_type << std::endl;
	return (*this);
}

// Default constructor

Cat::~Cat()
{
	std::cout << "Destructor called for " << this->_type << std::endl;
}

void	Cat::makeSound( void ) const
{
	std::cout << "MEOW" << std::endl;
}