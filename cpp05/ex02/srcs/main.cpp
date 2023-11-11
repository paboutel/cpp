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

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include <stdexcept>
#include <iostream>

int	main(void)
{
	try
	{
		Bureaucrat	boss ("boss", 1);
		ShrubberyCreationForm	test("TREEEEEE");

		std::cout << boss << std::endl
			 	  << test << std::endl;
		boss.signForm(test);
		boss.executeForm(test);
		boss = Bureaucrat ();
		std::cout << boss << std::endl;
		boss.signForm(test);

		RobotomyRequestForm	lol("slave");
		boss = Bureaucrat ("boss", 1);
		boss.signForm(lol);
		boss.executeForm(lol);
		boss.executeForm(lol);
		boss.executeForm(lol);
		boss.executeForm(lol);
		boss.executeForm(lol);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}