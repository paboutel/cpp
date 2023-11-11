/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paboutel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 14:57:16 by paboutel          #+#    #+#             */
/*   Updated: 2022/05/30 14:57:18 by paboutel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
:Animal("Dog")
{
	std::cout << "Dog construct =P" << std::endl;
}

Dog::~Dog(void)
{
	std::cout << "Dog destruct =P" << std::endl;
}

Dog::Dog(const Dog &otherInstance)
:Animal(otherInstance.type)
{
	std::cout << "Dog construct copy =P" << std::endl;
}

Dog	&Dog::operator=(const Dog &otherInst)
{
	this->type = otherInst.type;
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "wouf wouf waouuuff *je veux sortir*" << std::endl;
}
