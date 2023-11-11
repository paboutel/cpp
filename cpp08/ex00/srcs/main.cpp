/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paboutel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 15:11:08 by paboutel          #+#    #+#             */
/*   Updated: 2022/06/06 15:11:09 by paboutel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <exception>
#include <list>
#include <iterator>
#include <stdlib.h>
#include <sys/time.h>
#include <unistd.h>

template <typename T>
int	easyfind(T &container, int value)
{
	typename T::iterator it;

	it = std::find(container.begin(), container.end(), value);
	if (it != container.end())
		return (*it);
	throw std::exception();
}

int	main(void)
{
	int				value;
	std::list<int>	numbers;

	srand(time(NULL));
	for (size_t i = 0; i < 20; i++)
		numbers.push_back(rand() % 100);
	
	value = rand() % 100;
	for (std::list<int>::iterator it = numbers.begin(); it != numbers.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;


	std::cout << value << " is in list ?: ";
	try {
		easyfind(numbers, value);
		std::cout << "yes" << std::endl;
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
