/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paboutel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 02:31:23 by paboutel          #+#    #+#             */
/*   Updated: 2022/05/25 02:31:25 by paboutel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

#include <iostream>


FragTrap::FragTrap(const std::string &name)
: ClapTrap(name)
{
	this->_hit_points    = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
	std::cout << "Stop call me please " << this->_name << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "urf ... I ..." << std::endl;
	std::cout  << "AH AH AH AH URG" << std::endl;
}

FragTrap::FragTrap(const FragTrap &otherInst)
: ClapTrap(otherInst._name)
{
	*this = otherInst;
	std::cout << "A new FragTrap has born !" << std::endl << "Say hi to " << this->_name << " !" << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap &otherInst)
{
	this->_name = otherInst._name;
	this->_hit_points = otherInst._hit_points;
	this->_energy_points = otherInst._energy_points;
	this->_attack_damage = otherInst._attack_damage;
	return (*this);
}

void	FragTrap::attack(const std::string &target)
{
	if (!this->isAliveAndAwake())
	{
		std::cout << "It can't attack." << std::endl;
		return ;
	}
	this->_energy_points--;
	std::cout << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage !" << std::endl
			  << "It remains " << this->_energy_points << " energyPoints." << std::endl;
}

void FragTrap::highFivesGuys(void) const
{
	std::cout << "Do you want highfive with me ?" << std::endl;
}
