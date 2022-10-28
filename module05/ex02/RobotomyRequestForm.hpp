#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <string>
# include "Form.hpp"

class	RobotomyRequestForm : public Form
{
	public:
		RobotomyRequestForm(const RobotomyRequestForm &other);
		RobotomyRequestForm(const std::string &target);
		using	Form::operator=;
		~RobotomyRequestForm();
	public:
		void	execute(const Bureaucrat &executor) const;
	private:
		RobotomyRequestForm();
	private:
		const std::string		_target;
};

#endif
