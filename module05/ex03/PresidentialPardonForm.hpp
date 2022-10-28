#ifndef PRSIDENTIALPARDONFORM_HPP
# define PRSIDENTIALPARDONFORM_HPP

# include <string>
# include "Form.hpp"

class	PresidentialPardonForm : public Form
{
	public:
		PresidentialPardonForm(const PresidentialPardonForm &other);
		PresidentialPardonForm(const std::string &target);
		using	Form::operator=;
		~PresidentialPardonForm();
	public:
		void	execute(const Bureaucrat &executor) const;
	private:
		PresidentialPardonForm();
	private:
		const std::string		_target;
};

#endif
