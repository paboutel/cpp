/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paboutel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 18:09:36 by paboutel          #+#    #+#             */
/*   Updated: 2022/06/05 18:09:38 by paboutel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma	once

template< typename T>
T	max( T const & x, T const & y )
{
	return ( (x > y) ? x : y);
}

template< typename T>
T	min( T const & x, T const & y )
{
	return ( (x > y) ? y : x);
}

template< typename T>
void	swap( T & x, T & y )
{
	T	tmp;

	tmp = x;
	x = y;
	y = tmp;
}
