/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paboutel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 02:31:29 by paboutel          #+#    #+#             */
/*   Updated: 2022/05/25 02:31:30 by paboutel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"
#include <string>


class	FragTrap : public ClapTrap
{
public:
	FragTrap(const std::string &name);
	FragTrap(const FragTrap &OtherInst);
	~FragTrap();

	FragTrap	&operator=(const FragTrap &otherInst);
	
	void attack(const std::string &target);
	void highFivesGuys(void) const;
};
