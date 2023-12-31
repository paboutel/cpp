/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paboutel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 08:30:35 by paboutel          #+#    #+#             */
/*   Updated: 2022/06/02 08:30:36 by paboutel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

const std::string	Intern::formList[3] =
{
	("shrubbery creation"),
	("robotomy request"),
	("presidential pardon")
};

Intern::Intern(void)
{
}

Intern::~Intern(void)
{
}

Form	*Intern::makeForm(const std::string &type, const std::string &target) const
{
	int	formId = 0;
	while (formId < OUT_OF_RANGE && formList[formId] != type)
		formId++;
	switch (formId)
	{
	case SHRUBBERY_CREATION:
		return (new ShrubberyCreationForm(target));
	case ROBOTOMY_REQUEST:
		return (new RobotomyRequestForm(target));
	case PRESIDENTIAL_PARDON:
		return (new PresidentialPardonForm(target));
	default:
		std::cerr << "WrongFormType [" << type << ']' << std::endl;
		return (NULL);
	}
}