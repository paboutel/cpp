/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paboutel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 21:27:11 by paboutel          #+#    #+#             */
/*   Updated: 2022/05/31 21:27:12 by paboutel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma	once

#include <string>
#include <iostream>

class	Bureaucrat;

class	Form
{
private:
	const	std::string		name;
	bool					signedStatus;
	const unsigned int		rankSigned;
	const unsigned int		rankExec;

public:
	Form(const std::string name, const int rankSigned, const int rankExec);
	Form(const Form &otherInst);
	~Form(void);

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
			return ("Your Grade is Too High");
		}
	};

	std::string		getName(void) const;
	void			beSigned(Bureaucrat bureaucrat);
	unsigned int	getRankSigned(void) const;
	unsigned int	getRankExec(void) const;
	bool			isSigned(void) const;
};

std::ostream	&operator<<(std::ostream &stream, Form &inst);