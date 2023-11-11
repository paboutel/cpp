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
#include "Form.hpp"
#include <stdexcept>
#include <iostream>

int	main(void)
{
	try
	{
		Form		testForm ("blue", 10, 1);
		Bureaucrat	boss ("boss", 1);

		std::cout << boss << std::endl
				  << testForm << std::endl << std::endl;
		boss.signForm(testForm);
		for (int i = 0; i < 10; i++)
			boss.demote();
		boss.signForm(testForm);
		std::cout << std::endl
				  << boss << std::endl
				  << testForm << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}