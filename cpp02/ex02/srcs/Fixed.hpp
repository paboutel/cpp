/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paboutel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 19:22:28 by paboutel          #+#    #+#             */
/*   Updated: 2022/05/22 19:22:29 by paboutel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Fixed
{
private:
	int					_rawBits;
	static const int	_nBits = 8;

public:
	Fixed(const int num = 0);
	Fixed(const float num);
	Fixed(const Fixed &copy);
	~Fixed(void);

	Fixed	&operator=(const Fixed &copy);
	bool	operator<(const Fixed &otherInst) const;
bool	operator>(const Fixed &otherInst) const;
bool	operator<=(const Fixed &otherInst) const;
bool	operator>=(const Fixed &otherInst) const;
bool	operator==(const Fixed &otherInst) const;
bool	operator!=(const Fixed &otherInst) const;

Fixed	operator+(const Fixed &otherInst) const;
Fixed	operator-(const Fixed &otherInst) const;
Fixed	operator*(const Fixed &otherInst) const;
Fixed	operator/(const Fixed &otherInst) const;

Fixed	operator++(void);
Fixed	operator++(int);
Fixed	operator--(void);
Fixed	operator--(int);

void	setRawBits(const int newRawBits);
int		getRawBits(void) const;

float	toFloat(void) const;
int		toInt(void) const;

static Fixed		min(Fixed &firstInst, Fixed &secondInst);
static Fixed		max(Fixed &firstInst, Fixed &secondInst);
static const Fixed	min(const Fixed &firstInst, const Fixed &secondInst);
static const Fixed	max(const Fixed &firstInst, const Fixed &secondInst);

};

std::ostream	&operator<<(std::ostream &stream, Fixed inst);
