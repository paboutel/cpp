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
			return ("GradeTooLow");
		}
	};

	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char	*what() const throw()
		{
			return ("GradeTooHigh");
		}
	};

	Bureaucrat	&operator=(const Bureaucrat &otherInst);

	std::string		getName(void);
	unsigned int	getGrade(void);
	void			promote(void);
	void			demote(void);
};

std::ostream	&operator<<(std::ostream &stream, Bureaucrat &inst);