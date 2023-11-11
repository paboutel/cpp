/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paboutel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 14:10:47 by paboutel          #+#    #+#             */
/*   Updated: 2022/05/31 14:10:48 by paboutel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include <stdexcept>
#include <iostream>

int	main(void)
{
	try
	{
		Intern	someRandomIntern;
		Bureaucrat	boss("boss", 149);
		Form	*test;
		test = someRandomIntern.makeForm("presidential pardon", "though criminal");

		std::cout << boss << std::endl
				  << *test << std::endl;
		boss.signForm(*test);
		boss.executeForm(*test);
		delete test;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}