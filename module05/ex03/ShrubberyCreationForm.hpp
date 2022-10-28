#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <string>
# include <fstream>
# include "Form.hpp"

#define TREE \
"               &&&\n"\
"             &&&  &&&\n"\
"          &&& &&  & &&\n"\
"      && &\\/&\\|& ()|/ @, &&\n"\
"      &\\/(/&/&||/& /_/)_&/_&\n"\
"   &() &\\/&|()|/&\\/ '%' & ()\n"\
"  &_\\_&&_\\ |& |&&/&__%_/_& &&\n"\
"&&   && & &| &| /& & % ()& /&&\n"\
" ()&_---()&\\&\\|&&-&&--%---()~\n"\
"     &&     \\|||\n"\
"             |||\n"\
"             |||\n"\
"             |||\n"\
"       , -=-~  .-^- _\n"\
"		       `\n"

class	ShrubberyCreationForm : public Form
{
	public:
		ShrubberyCreationForm(const ShrubberyCreationForm &other);
		ShrubberyCreationForm(const std::string &target);
		using	Form::operator=;
		~ShrubberyCreationForm();
	public:
		void					execute(const Bureaucrat &executor) const;
	private:
		ShrubberyCreationForm();
	private:
		const std::string		_target;
};

#endif
