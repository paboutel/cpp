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


#include "ScavTrap.hpp"
#include <iostream>

int	main(void)
{
	ScavTrap Test("babushka");
	ClapTrap caca("maxime");
	ScavTrap TestCpy("lol");

	TestCpy = Test;
	Test.attack("random guy");
	TestCpy.attack("random guy");
	return (0);
}