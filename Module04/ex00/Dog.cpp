
#include "Animal.hpp"
#include "Dog.hpp"
#include <string>
#include <iostream>

// Default constructor

Dog::Dog() : Animal()
{
	this->_type = "Dog";
	std::cout << "Default constructor called for " << this->_type << std::endl;
}

// Copy constructor

Dog::Dog( const Dog &dog ) : Animal( dog )
{
	if (this != &dog)
		*this = dog;
	std::cout << "Copy constructor called for " << this->_type << std::endl;
}

// Copy assignment operator

Dog		&Dog::operator=( const Dog &dog )
{
	if (this != &dog)
		this->_type = dog._type;
	std::cout << "Copy assignment operator called for " << this->_type << std::endl;
	return (*this);
}

// Default constructor

Dog::~Dog()
{
	std::cout << "Destructor called for " << this->_type << std::endl;
}

void	Dog::makeSound( void ) const
{
	std::cout << "WOFWOF" << std::endl;
}