/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paboutel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 18:40:18 by paboutel          #+#    #+#             */
/*   Updated: 2022/05/18 18:40:19 by paboutel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av)
{
	Harl	harl;
	if (ac == 2)
	{
		
		harl.complain(av[1]);
		return (0);
	}
	std::cout << "omg wrong arg" << std::endl;
	return (1);
}
