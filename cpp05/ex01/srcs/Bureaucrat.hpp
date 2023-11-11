/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paboutel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 14:11:09 by paboutel          #+#    #+#             */
/*   Updated: 2022/05/31 14:11:11 by paboutel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class Form;

class Bureaucrat
{
private:
	const std::string	name;
	unsigned int		grade;

public:
	Bureaucrat(const std::string name = "default", const int grade = 150);
	Bureaucrat(const Bureaucrat &otherInst);
	~Bureaucrat();

	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char	*what() const throw() 
		{
			return ("Your Grade is Too Low");
		}
	};

	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char	*what() const throw()
		{
			return ("Your Gradeis Too High");
		}
	};

	Bureaucrat	&operator=(const Bureaucrat &otherInst);

	std::string		getName(void) const;
	unsigned int	getGrade(void) const;
	void			promote(void);
	void			demote(void);
	void			signForm(Form &form) const;
};

std::ostream	&operator<<(std::ostream &stream, Bureaucrat &inst);