/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paboutel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 18:31:22 by paboutel          #+#    #+#             */
/*   Updated: 2022/05/18 18:31:23 by paboutel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int	main(void)
{
	std::cout << "# Zombie	*horde = Zombie::zombieHorde(10, \"Zombs\") #" << std::endl;
	Zombie	*horde = Zombie::zombieHorde(10, "ninouille");

	std::cout << std::endl
			  << "# delete horde #" << std::endl;
	delete [] horde;
	std::cout << std::endl
			  << "# exiting main #" << std::endl;
	return (0);
}
