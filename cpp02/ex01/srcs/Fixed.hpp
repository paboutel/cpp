/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paboutel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 16:49:01 by paboutel          #+#    #+#             */
/*   Updated: 2022/05/21 16:49:02 by paboutel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma	once

#include <iostream>
#include <string>
#include <cmath>

class	Fixed
{
private:
	int			_rawBits;
	static const int	_radixPoint = 8;

public:
	Fixed(const	int	num = 0);
	Fixed(const float num);
	~Fixed(void);
	Fixed(const Fixed &copy);


	Fixed	&operator=(const Fixed &otherInst);

	int		getRawBits(void) const;
	void	setRawBits(const int raw);
	
	float	toFloat(void) const;
	int		toInt(void) const;

};

std::ostream	&operator<<(std::ostream &out, Fixed const &fixed);
