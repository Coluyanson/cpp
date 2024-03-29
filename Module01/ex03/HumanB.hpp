
#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
# include <string>

class	HumanB
{
	public:

		HumanB(std::string name);
		~HumanB();
		HumanB(const HumanB &humanB);
		HumanB & operator =(const HumanB &humanB);

		void			attack(void) const;
		void			setWeapon(Weapon & weapon);
	private:

		std::string		_name;
		Weapon			*_weapon;
};

#endif