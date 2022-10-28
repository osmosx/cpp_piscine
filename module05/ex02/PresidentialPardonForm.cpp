#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() :
	Form("PresidentialPardonForm", 25, 3)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) :
	Form("PresidentialPardonForm", 25, 3), _target(other._target)
{
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) :
	Form("PresidentialPardonForm", 25, 3), _target(target)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

void	PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
	this->check_executor(executor);
	std::cout << this->_target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}
