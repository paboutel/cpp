/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paboutel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 16:40:46 by paboutel          #+#    #+#             */
/*   Updated: 2022/05/08 16:40:48 by paboutel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(int ac, char **av)
{
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}

	for (int j = 1; j < ac; j++)
	{
		std::string urf (av[j]);
		for (size_t i = 0; i < urf.length(); i++)
			std::cout << (char)std::toupper(urf[i]);
		if (j < ac - 1)
			std::cout << " ";
	}
	std::cout << std::endl;
	return 0;
}
