/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paboutel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 14:53:28 by paboutel          #+#    #+#             */
/*   Updated: 2022/05/30 14:53:30 by paboutel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
:Animal("Cat"), ptrBrain(new Brain())
{
	std::cout << "Cat construct =P" << std::endl;
}

Cat::~Cat(void)
{
	delete ptrBrain;
	std::cout << "Cat destruct =P" << std::endl;
}

Cat::Cat(const Cat &otherInstance)
:Animal(otherInstance.type), ptrBrain(new Brain(*otherInstance.ptrBrain))
{
	std::cout << "Cat construct copy =P" << std::endl;
}

Cat	&Cat::operator=(const Cat &otherInst)
{
	*this->ptrBrain = *otherInst.ptrBrain;
	this->type = otherInst.type;
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "miu miu miaouuuuuu *je veux des croquettes*" << std::endl;
}
