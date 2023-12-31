/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paboutel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 13:22:45 by paboutel          #+#    #+#             */
/*   Updated: 2022/05/23 13:22:47 by paboutel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"
#include <iostream>

int	main(void)
{
	ClapTrap Test("Default Clap Trap");
	ClapTrap Test2("Another default Clap Trap");
	std::cout << std::endl
			  << std::endl;

	Test.attack("random guy");
	Test.takeDamage(5);
	Test.beRepaired(3);
	Test.takeDamage(999);
	std::cout << std::endl;
	Test.attack("wrong");
	Test.takeDamage(999);
	Test.beRepaired(999);
	std::cout << std::endl
			  << std::endl;
	for (int i = 0; i < 10; i++)
	{
		Test2.attack("random guy");
	}
	std::cout << std::endl;
	Test2.attack("wrong");
	Test2.takeDamage(999);
	Test2.beRepaired(999);
	std::cout << std::endl
			  << std::endl;
	return (0);
}