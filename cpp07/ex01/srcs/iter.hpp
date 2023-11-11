/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paboutel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 18:08:19 by paboutel          #+#    #+#             */
/*   Updated: 2022/06/05 18:08:22 by paboutel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <cstddef>

template< typename T>
void	iter( T tab[], size_t tablen,  void (function(T)))
{
	for (size_t i = 0; i < tablen; i++)
		function(tab[i]);
}
