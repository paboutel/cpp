/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paboutel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 16:59:06 by paboutel          #+#    #+#             */
/*   Updated: 2022/06/02 16:59:08 by paboutel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"
#include <iostream>
#include <cstdlib>

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "need :" << std::endl << "|./convert| and |number|" << std::endl;
		return (EXIT_FAILURE);
	}
	Convert (av[1]).displayAll();
	return (EXIT_SUCCESS);
}