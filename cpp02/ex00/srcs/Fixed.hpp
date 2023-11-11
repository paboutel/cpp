/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paboutel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 14:03:44 by paboutel          #+#    #+#             */
/*   Updated: 2022/05/21 14:03:45 by paboutel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma	once

class	Fixed
{

private:

	int					_rawBits;
	static const int	_radixPoint = 8;

public:

	Fixed();
	~Fixed();
	Fixed(const Fixed &copy);

	Fixed	&operator=(const Fixed &object);
	int		getRawBits(void) const;
	void	setRawBits(const int raw);

};
