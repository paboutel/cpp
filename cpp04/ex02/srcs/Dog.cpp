/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paboutel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 14:53:41 by paboutel          #+#    #+#             */
/*   Updated: 2022/05/30 14:53:42 by paboutel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
:Animal("Dog"), ptrBrain(new Brain())
{
	std::cout << "Dog construct =P" << std::endl;
}

Dog::~Dog(void)
{
	delete ptrBrain;
	std::cout << "Dog destruct =P" << std::endl;
}

Dog::Dog(const Dog &otherInstance)
:Animal(otherInstance.type), ptrBrain(new Brain(*otherInstance.ptrBrain))
{
	std::cout << "Dog construct copy =P" << std::endl;
}

Dog	&Dog::operator=(const Dog &otherInst)
{
	*this->ptrBrain = *otherInst.ptrBrain;
	this->type = otherInst.type;
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "wouf wouf waouuuff *je veux sortir*" << std::endl;
}
