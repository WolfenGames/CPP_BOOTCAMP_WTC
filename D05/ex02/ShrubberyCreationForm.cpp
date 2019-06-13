/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <jwolf@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 21:01:15 by jwolf             #+#    #+#             */
/*   Updated: 2019/06/11 23:13:41 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

const int ShrubberyCreationForm::signedReq = 145;
const int ShrubberyCreationForm::execReq = 137;

ShrubberyCreationForm::ShrubberyCreationForm(void) :
	Form("Anonymous", "Shrubbery",
	ShrubberyCreationForm::signedReq, ShrubberyCreationForm::execReq)
{}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
	Form(target, "Shrubbery",
	ShrubberyCreationForm::signedReq, ShrubberyCreationForm::execReq)
{}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) :
	Form("Anonymous", "Shrubbery",
	ShrubberyCreationForm::signedReq, ShrubberyCreationForm::execReq)
{
    *this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{}

ShrubberyCreationForm	&ShrubberyCreationForm::operator= (const ShrubberyCreationForm &cpy)
{
    static_cast <void> (cpy);
    return *this;
}

void	ShrubberyCreationForm::execute(const Bureaucrat &exec) const
{
    std::ofstream  out_file;

    Form::execute(exec);
	std::string openval = getTarget() + "_shrubbery";
    out_file.open(openval.c_str(),
                 std::ofstream::out | std::ofstream::trunc);
    if (out_file.fail())
    {
        std::cerr << "Error openning the outfile" << std::endl;
    }
	out_file << "         *           			" << std::endl;
	out_file << "        /|\\         			" << std::endl;                   
	out_file << "       /*|O\\		   			" << std::endl;
	out_file << "      /*/|\\*\\      			" << std::endl;
	out_file << "     /X/O|*\\X\\     			" << std::endl;
	out_file << "    /*/X/|\\X\\*\\    			" << std::endl;
	out_file << "   /O/*/X|*\\O\\X\\			" << std::endl;             
	out_file << "  /*/O/X/|\\X\\O\\*\\			" << std::endl;
	out_file << " /X/O/*/X|O\\X\\*\\O\\			" << std::endl;
	out_file << "/O/X/*/O/|\\X\\*\\O\\X\\		" << std::endl;
	out_file << "        |X|      				" << std::endl;
	out_file << "        |X|    				" << std::endl;
    out_file.close();
}
