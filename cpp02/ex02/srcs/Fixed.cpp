/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paboutel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 19:22:35 by paboutel          #+#    #+#             */
/*   Updated: 2022/05/22 19:22:36 by paboutel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(const int num)
: _rawBits(num << Fixed::_nBits)
{
}

Fixed::Fixed(const float num)
: _rawBits(roundf(num * (1 << Fixed::_nBits)))
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

bool	Fixed::operator<(const Fixed &otherInst) const
{
	return (this->_rawBits < otherInst._rawBits);
}

bool	Fixed::operator>(const Fixed &otherInst) const
{
	return (this->_rawBits > otherInst._rawBits);
}

bool	Fixed::operator<=(const Fixed &otherInst) const
{
	return (this->_rawBits <= otherInst._rawBits);
}

bool	Fixed::operator>=(const Fixed &otherInst) const
{
	return (this->_rawBits >= otherInst._rawBits);
}

bool	Fixed::operator==(const Fixed &otherInst) const
{
	return (this->_rawBits == otherInst._rawBits);
}

bool	Fixed::operator!=(const Fixed &otherInst) const
{
	return (this->_rawBits != otherInst._rawBits);
}

Fixed	Fixed::operator+(const Fixed &otherInst) const
{
	Fixed	sum;

	sum.setRawBits(this->_rawBits + otherInst._rawBits);
	return (sum);
}

Fixed	Fixed::operator-(const Fixed &otherInst) const
{
	Fixed	difference;

	difference.setRawBits(this->_rawBits - otherInst._rawBits);
	return (difference);
}

Fixed	Fixed::operator*(const Fixed &otherInst) const
{
	Fixed	product;

	product.setRawBits((long)this->_rawBits * otherInst._rawBits / (1 << Fixed::_nBits));
	return (product);
}

Fixed	Fixed::operator/(const Fixed &otherInst) const
{
	Fixed	quotient;

	quotient.setRawBits(((long)this->_rawBits * (1 << Fixed::_nBits)) / otherInst._rawBits);
	return (quotient);
}

Fixed	Fixed::operator++(void)
{
	this->_rawBits += (1 << Fixed::_nBits);
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	oldInst (*this);
	operator++();
	return (oldInst);
}

Fixed	Fixed::operator--(void)
{
	this->_rawBits -= (1 << Fixed::_nBits);
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	oldInst (*this);
	operator--();
	return (oldInst);
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
	return ((float)this->_rawBits / (float)(1 << Fixed::_nBits));
}

int		Fixed::toInt(void) const
{
	return (this->_rawBits >> Fixed::_nBits);
}

Fixed Fixed::min(Fixed &firstInst, Fixed &secondInst)
{
	return ((firstInst._rawBits < secondInst._rawBits) ? firstInst : secondInst);
}

Fixed Fixed::max(Fixed &firstInst, Fixed &secondInst)
{
	return ((firstInst._rawBits > secondInst._rawBits) ? firstInst : secondInst);
}

const Fixed Fixed::min(const Fixed &firstInst, const Fixed &secondInst)
{
	return ((firstInst._rawBits < secondInst._rawBits) ? firstInst : secondInst);
}

const Fixed Fixed::max(const Fixed &firstInst, const Fixed &secondInst)
{
	return ((firstInst._rawBits > secondInst._rawBits) ? firstInst : secondInst);
}

std::ostream	&operator<<(std::ostream &stream, Fixed inst)
{
	stream << inst.toFloat();
	return (stream);
}
