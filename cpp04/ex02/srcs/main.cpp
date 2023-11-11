/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paboutel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 05:21:35 by paboutel          #+#    #+#             */
/*   Updated: 2022/05/25 05:22:09 by paboutel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"
#include <iostream>

int	main(void)
{
	const Animal	*archeDeNoé[10];

	for (int i = 0; i < 10; i++)
	{
		if (i % 2)
			archeDeNoé[i] = new Dog;
		else
			archeDeNoé[i] = new Cat;
		std::cout << std::endl;
	}
	for (int i = 0; i < 10; i++)
		delete archeDeNoé[i];
	return (0);
}

