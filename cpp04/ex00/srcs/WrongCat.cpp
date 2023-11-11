/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paboutel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 14:57:56 by paboutel          #+#    #+#             */
/*   Updated: 2022/05/30 14:57:57 by paboutel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
:WrongAnimal("WrongCat")
{
	std::cout << "WrongCat construct =P" << std::endl;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destruct =P" << std::endl;
}

WrongCat::WrongCat(const WrongCat &otherInstance)
:WrongAnimal(otherInstance.type)
{
	std::cout << "WrongCat construct copy =P" << std::endl;
}

WrongCat	&WrongCat::operator=(const WrongCat &otherInst)
{
	this->type = otherInst.type;
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "miu miu miaouuuuuu *je veux des croquettes*" << std::endl;
}
