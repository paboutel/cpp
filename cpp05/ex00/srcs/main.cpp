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
#include <stdexcept>
#include <iostream>

int	main(void)
{
	try
	{
		Bureaucrat test("Jean", 120);
		std::cout << test << std::endl;
		Bureaucrat lol("Bapt", 0);
		std::cout << lol << std::endl;
		lol = test;
		std::cout << lol << std::endl;
		Bureaucrat test2 (test);
		std::cout << test2 << std::endl;
		test2.promote();
		std::cout << test2 << " " << test << std::endl;
		Bureaucrat test3;
		std::cout << test3 << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}