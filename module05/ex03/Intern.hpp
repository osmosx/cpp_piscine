#ifndef INTERN_HPP
# define INTERN_HPP

# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class	Intern
{
	public:
		Intern();
		Intern(const Intern &other);
		Intern	&operator=(const Intern &other);
		~Intern();
	public:
		Form	*makeForm(const std::string &formName, const std::string &target) const;
	private:
		Form	*makePresidentialPardon(const std::string &target) const;
		Form	*makeRobotomyRequest(const std::string &target) const;
		Form	*makeShrubberyCreation(const std::string &target) const;
};

#endif
