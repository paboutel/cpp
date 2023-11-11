/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paboutel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 18:37:32 by paboutel          #+#    #+#             */
/*   Updated: 2022/05/18 18:37:33 by paboutel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name)
: name(name), weapon(NULL)
{
}

HumanB::~HumanB()
{
}

void	HumanB::attack(void)
{
	if (this->weapon)
		std::cout << this->name << "attack with :" << this->weapon->getType() << std::endl;
	else
		std::cout << this->name << "wtf where is weapoon?" << std::endl;
	
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}
