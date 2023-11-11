/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paboutel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 13:22:55 by paboutel          #+#    #+#             */
/*   Updated: 2022/05/23 13:22:57 by paboutel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma	once
#include <string>
#include <iostream>

class ClapTrap
{
protected:

	std::string			_name;
	unsigned int		_hit_points;
	unsigned int		_energy_points;
	unsigned int		_attack_damage;
	
	bool	isAliveAndAwake(void) const;
	void	printPreAction(void) const;

public:

	ClapTrap(const std::string &name);
	ClapTrap(const ClapTrap &OtherInst);
	~ClapTrap();

	ClapTrap	&operator=(const ClapTrap &OtherInst);
	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};