/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paboutel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 14:11:03 by paboutel          #+#    #+#             */
/*   Updated: 2022/05/31 14:11:05 by paboutel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(const std::string name, const int grade)
: name(name)
{
	if (grade > 150)
		throw	Bureaucrat::GradeTooLowException ();
	if (grade < 1)
		throw	Bureaucrat::GradeTooHighException ();
	this->grade = grade;
}

Bureaucrat::~Bureaucrat(void)
{
}

Bureaucrat::Bureaucrat(const Bureaucrat &otherInst)
: name(otherInst.name)
{
	*this = otherInst;
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &otherInst)
{
	this->grade = otherInst.grade;
	return (*this);
}

std::string		Bureaucrat::getName(void) const
{
	return (this->name);
}

unsigned int	Bureaucrat::getGrade(void) const
{
	return (this->grade);
}

void			Bureaucrat::promote(void)
{
	if (this->grade - 1 < 1)
		throw	Bureaucrat::GradeTooHighException ();
	this->grade--;
}

void			Bureaucrat::demote(void)
{
	if (this->grade + 1 > 150)
		throw	Bureaucrat::GradeTooLowException ();
	this->grade++;
}

void			Bureaucrat::signForm(Form &form) const
{
	try
	{
		form.beSigned(*this);
		std::cout << this->name << "signed" << form.getName() << std::endl;
	}
	catch (Form::GradeTooLowException &e)
	{
		std::cout << this->name << " couldn't sign Form " << form.getName() << " because [" << e.what() << ']' << std::endl;
	}
}

void			Bureaucrat::executeForm(Form &form) const
{
	try
	{
		form.execute(*this);
		std::cout << this->name << " executed Form " << form.getName() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << this->name << " couldn't execut Form " << form.getName() << " because [" << e.what() << ']' << std::endl;
	}
}

std::ostream	&operator<<(std::ostream &stream, Bureaucrat &inst)
{
	stream << "Bureaucrat " << inst.getName() << " is grade " << inst.getGrade();
	return (stream);
}
