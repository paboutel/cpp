/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paboutel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 14:57:36 by paboutel          #+#    #+#             */
/*   Updated: 2022/05/30 14:57:37 by paboutel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(const std::string &type)
: type(type)
{
	std::cout << "hey you! I am " << this->type << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "i am dead !" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &otherInstance)
{
	*this = otherInstance;
	std::cout << "i am otherInstance hehe!" << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &otherInst)
{
	this->type = otherInst.type;
	return (*this);
}

std::string		WrongAnimal::getType(void) const
{
	return (this->type);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "inaudible sound" << std::endl;
}
