/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paboutel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 15:57:27 by paboutel          #+#    #+#             */
/*   Updated: 2022/06/06 15:57:28 by paboutel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
/*
int	main(int argc, char **argv)
{
	int					range;
	int					size;
	int					value;
	std::vector<int>	tmp;

	if (argc != 3)
	{
		std:: cout << "Usage: ./span [size array] [range]" << std::endl;
		return (1);
	}
	srand(time(NULL));
	size = std::atoi(argv[1]);
	range = std::atoi(argv[2]) + 1;

	Span	array(size);

	std::cout << "[";
	for (int i = 0; i < size; i++)
	{
		value = rand() % range;
		std::cout << value;
		if (i < size - 1)
			std::cout << ", ";
		tmp.push_back(value);
	}
	std::cout << "]" << std::endl;


	try {
		array.addNumber(tmp.begin(), tmp.end());
		std::cout << "shortest: " << array.shortestSpan() << std::endl;
		std::cout << "longest: " << array.longestSpan() << std::endl;
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	return (0);
}*/

int main()
{
Span sp = Span(5);
sp.addNumber(6);
sp.addNumber(3);
sp.addNumber(17);
sp.addNumber(9);
sp.addNumber(11);
std::cout << sp.shortestSpan() << std::endl;
std::cout << sp.longestSpan() << std::endl;
return 0;
}