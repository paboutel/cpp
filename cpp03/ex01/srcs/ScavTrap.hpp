/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paboutel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 02:30:23 by paboutel          #+#    #+#             */
/*   Updated: 2022/05/25 02:30:25 by paboutel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"
#include <string>


class	ScavTrap : public ClapTrap
{
public:
	ScavTrap(const std::string &name);
	ScavTrap(const ScavTrap &OtherInst);
	~ScavTrap();

	ScavTrap	&operator=(const ScavTrap &otherInst);
	void attack(const std::string &target);
	void	guardGate(void) const;


};
