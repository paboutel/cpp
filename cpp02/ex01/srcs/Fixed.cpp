/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paboutel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 16:48:53 by paboutel          #+#    #+#             */
/*   Updated: 2022/05/21 16:48:54 by paboutel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(const int num)
: _rawBits(num << Fixed::_radixPoint)
{
}

Fixed::Fixed(const float num)
: _rawBits (roundf(num * (1 << Fixed::_radixPoint)))
{
}

Fixed::Fixed(const Fixed &otherInst)
{
	*this = otherInst;
}

Fixed::~Fixed(void)
{
}

Fixed	&Fixed::operator=(const Fixed &otherInst)
{
	this->_rawBits = otherInst._rawBits;
	return (*this);
}

void	Fixed::setRawBits(const int newRawBits)
{
	this->_rawBits = newRawBits;
}

int		Fixed::getRawBits(void) const
{
	return (this->_rawBits);
}

float	Fixed::toFloat(void) const
{
	return ((float)this->_rawBits / (float)(1 << Fixed::_radixPoint));
}

int		Fixed::toInt(void) const
{
	return (this->_rawBits >> Fixed::_radixPoint);
}

std::ostream	&operator<<(std::ostream &stream, const Fixed &inst)
{
	stream << inst.toFloat();
	return (stream);
}
