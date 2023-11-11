/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paboutel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 21:27:04 by paboutel          #+#    #+#             */
/*   Updated: 2022/05/31 21:27:06 by paboutel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(const std::string name, const int rankSigned, const int rankExec)
: name(name), signedStatus(false), rankSigned(rankSigned), rankExec(rankExec)
{
	if (rankSigned > 150 || rankExec > 150)
		throw	Form::GradeTooLowException ();
	if (rankSigned < 1 || rankExec < 1)
		throw	Form::GradeTooHighException ();
}

Form::Form(const Form &otherInst)
: name(otherInst.name), signedStatus(otherInst.signedStatus), rankSigned(otherInst.rankSigned), rankExec(otherInst.rankExec)
{
	if (otherInst.rankSigned > 150 || otherInst.rankExec > 150)
		throw	Form::GradeTooLowException ();
	if (otherInst.rankSigned < 1 || otherInst.rankExec < 1)
		throw	Form::GradeTooHighException ();
}

Form::~Form(void)
{
}

std::string	Form::getName(void) const
{
	return (this->name);
}

unsigned int	Form::getRankSigned(void) const
{
	return (this->rankSigned);
}

unsigned int	Form::getRankExec(void) const
{
	return (this->rankExec);
}

bool			Form::isSigned(void)	const
{
	return (this->signedStatus);
}

void			Form::beSigned(Bureaucrat bureaucrat)
{
	if(bureaucrat.getGrade() <= this->rankSigned)
		this->signedStatus = true;
	else
		throw	Form::GradeTooLowException();
}

void			Form::execute(const Bureaucrat &executor)
{
	if (executor.getGrade() > this->rankExec)
		throw Form::GradeTooLowException ();
	if (!this->signedStatus)
		throw Form::TryToExecuteUnsignedFormException ();
	this->beExecuted();
}

std::ostream	&operator<<(std::ostream &stream, Form &inst)
{
	stream << "Form " << inst.getName() << " is " << (inst.isSigned() ? "signed" : "not signed") << ". The grade to sign it is " << inst.getRankSigned() << ", the grade to execute it is " << inst.getRankExec();
	return (stream);
}