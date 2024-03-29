#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
#include <iostream>

int	main( void )
{
	const int	size = 100;
	Animal	*animals[size];

	for (int i = 0; i < size; i++)
	{
		if (i < size / 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	std::cout << "\033[32mStart deleting\033[0m" << std::endl;
	for (int i = 0; i < size; i++)
	{
		delete(animals[i]);
	}
}
