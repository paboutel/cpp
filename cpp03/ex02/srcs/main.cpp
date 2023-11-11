/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paboutel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 02:31:35 by paboutel          #+#    #+#             */
/*   Updated: 2022/05/25 02:31:36 by paboutel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

int	main(void)
{
	FragTrap Test("Test");
	FragTrap TestCpy ("lol");

	TestCpy = Test;
	Test.attack("random guy");
	TestCpy.attack("random guy");
	return (0);
}
