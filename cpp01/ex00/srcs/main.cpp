/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paboutel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 18:30:03 by paboutel          #+#    #+#             */
/*   Updated: 2022/05/18 18:30:05 by paboutel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int	main(void)
{
	std::cout << "# Zombie stack_zombs(\"stack_zombs\") #" << std::endl;
	Zombie stack_zombs("stack_zombs");
	std::cout << std::endl
			  << "# Zombie	*heap_zombs = Zombie::newZombie(\"heap_zombs\") #" << std::endl;
	Zombie	*heap_zombs = Zombie::newZombie("heap_zombs");

	std::cout << std::endl
			  << "# stack_zombs.announce() #" << std::endl;
	stack_zombs.announce();
	std::cout << std::endl
			  << "# heap_zombs->announce() #" << std::endl;
	heap_zombs->announce();
	std::cout << std::endl
			  << "# Zombie::randomChump(\"temporary_stack_zombs\") #" << std::endl;
	Zombie::randomChump("temporary_stack_zombs");

	std::cout << std::endl
			  << "# delete heap_zombs #" << std::endl;
	delete heap_zombs;
	std::cout << std::endl
			  << "# exiting main #" << std::endl;
	return (0);
}
