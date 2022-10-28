#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() :
	Form("ShrubberyCreationForm", 145, 137), _target("")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) :
	Form("ShrubberyCreationForm", 145, 137), _target(other._target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) :
	Form("ShrubberyCreationForm", 145, 137), _target(target)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

void	ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
	std::ofstream	out;
	std::string	fileName = _target + "_shrubbery";

	this->check_executor(executor);

	out.open(fileName.c_str());
	out << TREE;
	out.close();
}
