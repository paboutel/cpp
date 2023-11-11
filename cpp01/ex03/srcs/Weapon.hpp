/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paboutel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 18:38:10 by paboutel          #+#    #+#             */
/*   Updated: 2022/05/18 18:38:11 by paboutel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class Weapon
{
private:
	std::string	type;

public:
	Weapon(std::string type);
	~Weapon(void);
	void				setType(std::string type);
	const std::string	&getType(void) const;
};
