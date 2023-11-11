/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paboutel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 14:57:03 by paboutel          #+#    #+#             */
/*   Updated: 2022/05/30 14:57:04 by paboutel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
:Animal("Cat")
{
	std::cout << "Cat construct =P" << std::endl;
}

Cat::~Cat(void)
{
	std::cout << "Cat destruct =P" << std::endl;
}

Cat::Cat(const Cat &otherInstance)
:Animal(otherInstance.type)
{
	std::cout << "Cat construct copy =P" << std::endl;
}

Cat	&Cat::operator=(const Cat &otherInst)
{
	this->type = otherInst.type;
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "miu miu miaouuuuuu *je veux des croquettes*" << std::endl;
}
