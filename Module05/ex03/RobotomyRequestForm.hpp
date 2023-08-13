
#pragma once

#include "AForm.hpp"
#include <string>

class RobotomyRequestForm : public AForm
{
	public:
		RobotomyRequestForm( std::string const &target );
		RobotomyRequestForm( RobotomyRequestForm const &other );
		virtual ~RobotomyRequestForm();
		RobotomyRequestForm&	operator=( RobotomyRequestForm const &other );

		void	execute( Bureaucrat const & executor ) const;
		static AForm*	generate( std::string const & target );
	private:
		RobotomyRequestForm();
		std::string			_target;
};