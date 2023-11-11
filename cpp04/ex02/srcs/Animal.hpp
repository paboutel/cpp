/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paboutel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 14:53:04 by paboutel          #+#    #+#             */
/*   Updated: 2022/05/30 14:53:06 by paboutel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma	once

#include <string>
#include <iostream>

class Animal
{
protected:
	std::string type;

public:
	Animal(const std::string &type = "");
	Animal(const Animal &otherInstance);
	virtual	~Animal(void) = 0;

	Animal	&operator=(const Animal &otherInstance);
	virtual void	makeSound(void) const;
	std::string		getType(void) const;

};
