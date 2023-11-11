/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paboutel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 07:57:54 by paboutel          #+#    #+#             */
/*   Updated: 2022/06/02 07:57:55 by paboutel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <iostream>

RobotomyRequestForm::RobotomyRequestForm(const std::string target)
: Form("RobotomyRequestForm", 72, 45), target(target), shunt(false)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &otherInst)
: Form(otherInst.getName(), otherInst.getRankSigned(), otherInst.getRankExec()), target(otherInst.target)
{
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
}

void	RobotomyRequestForm::beExecuted(void)
{
	std::cout << "BBZZZZZZZ !!!" << std::endl
			  << this->target
	<< (this->shunt ? " has failed to being robotomized." : " has being robotomized.") << std::endl;
	this->shunt = (!this->shunt);
}
