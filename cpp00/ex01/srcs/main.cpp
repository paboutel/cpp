/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paboutel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 16:39:44 by paboutel          #+#    #+#             */
/*   Updated: 2022/05/08 16:39:48 by paboutel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <string>
#include <sstream>


int	main()
{
	std::string	str;
	PhoneBook 	phone;

	std::cout << "/* ***************************************** */" << std::endl;
	std::cout << "/* WELCOME, YOU CAN USE: ADD / SEARCH / EXIT */" << std::endl;
	std::cout << "/* ***************************************** */" << std::endl;
	while (str.compare("EXIT"))
	{
		std::cout << "/* ";
		std::getline(std::cin, str);
		if (!std::cin.good())
		{
			std::cout << std::endl << "/* ***************************************** */" << std::endl;
			std::cout << "/* STOP BULLY ME !!!                         */" << std::endl;
			std::cout << "/* ***************************************** */" << std::endl;
			return (1);
		}
		if (!str.compare("ADD"))
			phone.add();
		else if (!str.compare("SEARCH"))
			phone.search();
		else if (str.compare("EXIT") && str.length())
		{
			std::cout << "/* ***************************************** */" << std::endl;
			std::cout << "/* WRONG COMMANDE !!!                        */" << std::endl;
			std::cout << "/* ***************************************** */" << std::endl;
		}
	}
	std::cout << "/* ***************************************** */" << std::endl;
	std::cout << "/* GOODBYE, HAVE A NICE DAY =P               */" << std::endl;
	std::cout << "/* ***************************************** */" << std::endl;
	return (0);
}
