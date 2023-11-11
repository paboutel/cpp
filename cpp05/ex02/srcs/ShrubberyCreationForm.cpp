/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paboutel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 07:56:46 by paboutel          #+#    #+#             */
/*   Updated: 2022/06/02 07:56:47 by paboutel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target)
: Form("ShrubberyCreationForm", 145, 137), target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &otherInst)
: Form(otherInst.getName(), otherInst.getRankSigned(), otherInst.getRankExec()), target(otherInst.target)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
}

void	ShrubberyCreationForm::beExecuted(void)
{
	std::ofstream	outputFile;

	outputFile.open((this->target + "_shrubbery").c_str());
	if (!outputFile.is_open())
		throw "error";
	outputFile << TREE;
	outputFile.close();
}
