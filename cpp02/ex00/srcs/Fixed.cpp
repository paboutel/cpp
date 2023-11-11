/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paboutel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 14:03:38 by paboutel          #+#    #+#             */
/*   Updated: 2022/05/21 14:03:39 by paboutel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
:_rawBits(0)
{
}

Fixed::Fixed(const Fixed &copy)
{
	*this = copy;
}

Fixed::~Fixed(void)
{
}

Fixed	&Fixed::operator=(const Fixed &object)
{
	this->_rawBits = object._rawBits;
	return (*this);
}

void	Fixed::setRawBits(const int raw)
{
	this->_rawBits = raw;
}

int		Fixed::getRawBits(void) const
{
	return(this->_rawBits);
}
