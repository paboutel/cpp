/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paboutel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 14:56:45 by paboutel          #+#    #+#             */
/*   Updated: 2022/05/30 14:56:46 by paboutel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(const std::string &type)
: type(type)
{
	std::cout << "hey you! I am " << this->type << std::endl;
}

Animal::~Animal(void)
{
	std::cout << "i am dead !" << std::endl;
}

Animal::Animal(const Animal &otherInstance)
{
	*this = otherInstance;
	std::cout << "i am otherInstance hehe!" << std::endl;
}

Animal	&Animal::operator=(const Animal &otherInst)
{
	this->type = otherInst.type;
	return (*this);
}

std::string		Animal::getType(void) const
{
	return (this->type);
}

void	Animal::makeSound(void) const
{
	std::cout << "inaudible sound" << std::endl;
}
