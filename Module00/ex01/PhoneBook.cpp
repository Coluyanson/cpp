#include "PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook(void)
{
	this->_size = 8;
	this->_iterator = 0;
	this->_running = true;
	std::cout << "Constructor called for PhoneBook" << std::endl;
	
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "Destructor called for PhoneBook" << std::endl;	
}

bool	PhoneBook::get_Running(void) const
{
	return (this->_running);
}

void	PhoneBook::set_Running(bool value)
{
	this->_running = value;
}

std::string	PhoneBook::_instertField(std::string outputMess) const
{
	std::string	input;

	while (!input.length())
	{
		std::cout << outputMess << std::endl;
		std::cin >> input;
	}
	return (input);
}

void	PhoneBook::add(void)
{
	Contact		contact;

	contact = this->_contacts[this->_iterator];
	contact.setFirstName(this->_instertField("Insert name"));
	contact.setLastName(this->_instertField("Inster last name"));
	contact.setNickName(this->_instertField("Insert nick name"));
	contact.setPhoneNumber(this->_instertField("Insert phone number"));
	contact.setDarkestSecret(this->_instertField("Insert your darkest secret 👹"));
	this->_contacts[this->_iterator] = contact;
	this->_incrementIterator();
	std::cout << contact.getFirstName() << " " << contact.getLastName() << " added" << std::endl;
	std::cout << "Iterator is: " << this->_iterator << std::endl;
}

void	PhoneBook::search(void) const
{
	std::cout << "Searching...." << std::endl;

	std::cout << "_____________________________________________" << std::endl;
	std::cout << "|____ID____|___NAME___|LAST_NAME_|NICK_NAME_|" << std::endl;
	for(int i = 0; i < this->_size; i++)
	{
		this->_contacts[i].displaySearchContact(i);
	}
}

void	PhoneBook::_incrementIterator(void)
{
	this->_iterator += 1;
	this->_iterator = this->_iterator % this->_size;
}

