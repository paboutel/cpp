/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paboutel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 18:37:25 by paboutel          #+#    #+#             */
/*   Updated: 2022/05/18 18:37:26 by paboutel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "Weapon.hpp"
# include <string>

 class HumanA
 {
 private:
	const std::string	name;
	Weapon				&weapon;
 public:
	 HumanA(std::string name, Weapon &weapon);
	 ~HumanA();
	 void	attack(void);
 };
 
