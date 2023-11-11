/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paboutel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 17:53:57 by paboutel          #+#    #+#             */
/*   Updated: 2022/05/13 17:54:02 by paboutel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"
#include <iostream>

int	main(void)
{
	{
		Weapon	club ("crude spiked club");
		HumanA	humanA ("HumanA", club);

		humanA.attack();
		club.setType("some other type of club");
		humanA.attack();
	}
	{
		Weapon	club("crude spiked club");
		HumanB	humanB("HumanB");
		
		humanB.attack();
		humanB.setWeapon(club);
		humanB.attack();
		club.setType("some other type of club");
		humanB.attack();
	}

	return (0);
}
