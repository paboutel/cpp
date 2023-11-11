/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paboutel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 13:23:02 by paboutel          #+#    #+#             */
/*   Updated: 2022/05/23 13:23:04 by paboutel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string &name)
: _name(name), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "Hello my name is " << this->_name << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "urf ... I ..." << std::endl;
	std::cout << this->_name << " is dead" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &otherInst)
{
	*this = otherInst;
	std::cout << "A new ClapTrap has born !" << std::endl
			  << "Say welcome to " << this->_name << " !" << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &otherInst)
{
	this->_name = otherInst._name;
	this->_hit_points = otherInst._hit_points;
	this->_energy_points = otherInst._energy_points;
	this->_attack_damage = otherInst._attack_damage;
	return (*this);
}

bool	ClapTrap::isAliveAndAwake(void) const
{
	if (this->_hit_points && this->_energy_points)
		return (true);
	std::cout << "ClapTrap " << this->_name << "ClapTrap " << this-> _name << " is out of " << (this->_hit_points ? "energyPoints" : "hitPoints") << "!" << std::endl;
	return (false);
}

void	ClapTrap::attack(const std::string &target)
{
	if (!isAliveAndAwake())
	{
		std::cout << "ClapTrap " << this->_name << " is out of control !" << std::endl;
		return ;
	}
	this->_energy_points--;
	std::cout << "ClapTrap " << this->_name << " attacks " << target << " , causing " << this->_attack_damage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (!isAliveAndAwake())
	{
		std::cout << "ClapTrap " << this->_name << " is out of control !" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " is attacked, he take " <<  amount << " , causing " << this->_attack_damage << " points of damage!" << std::endl;
	this->_hit_points -= (this->_hit_points < amount) ? this->_hit_points : amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (!isAliveAndAwake())
	{
		std::cout << "ClapTrap " << this->_name << " can't be repaired, URFFFF !" << std::endl;
		return ;
	}
	this->_hit_points += amount;
	this->_energy_points--;
	std::cout << "ClapTrap " << this->_name << " is repairing for " << amount << " hitPoints, it remains " << this->_hit_points << " hitPoints and " << this->_energy_points << " energyPoints." << std::endl;
}