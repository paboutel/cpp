/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paboutel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 02:30:31 by paboutel          #+#    #+#             */
/*   Updated: 2022/05/25 02:30:32 by paboutel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>


ScavTrap::ScavTrap(const std::string &name)
: ClapTrap(name)
{
	this->_hit_points    = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
	std::cout << "Hello my name is " << this->_name << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "urf ... I ..." << std::endl;
	std::cout  << "Do you this i am really dead?" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &otherInst)
: ClapTrap(otherInst._name)
{
	*this = otherInst;
	std::cout << "A new ClapTrap has born !" << std::endl << "Say welcome to " << this->_name << " !" << std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &otherInst)
{
	this->_name = otherInst._name;
	this->_hit_points = otherInst._hit_points;
	this->_energy_points = otherInst._energy_points;
	this->_attack_damage = otherInst._attack_damage;
	return (*this);
}

void	ScavTrap::attack(const std::string &target)
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

void	ScavTrap::guardGate(void) const
{
	std::cout << this->_name << " hast entered in Gate keeper mode !" << std::endl;
}
