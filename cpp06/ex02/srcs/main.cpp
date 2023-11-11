/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paboutel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 20:38:11 by paboutel          #+#    #+#             */
/*   Updated: 2022/06/03 20:38:13 by paboutel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

#include <iostream>
#include <exception>
#include <stdlib.h>
#include <sys/time.h>
#include <unistd.h>
#include "Base.hpp"

static Base	*generate(void)
{
	switch (rand() % 3)
	{
	case 0:
		std::cout << "generate generated a new A" << std::endl;
		return (new A());
	case 1:
		std::cout << "generate generated a new B" << std::endl;
		return (new B());
	case 2:
		std::cout << "generate generated a new C" << std::endl;
		return (new C());
	default:
		return (NULL);
	}
}

static void	identify(Base *p)
{
	if (dynamic_cast<A *>(p) != NULL)
		std::cout << 'A' << std::endl;
	else if (dynamic_cast<B *>(p) != NULL)
		std::cout << 'B' << std::endl;
	else if (dynamic_cast<C *>(p) != NULL)
		std::cout << 'C' << std::endl;
}

static void	identify(Base &p)
{
	identify(&p);
	try
	{
		A	&lol = dynamic_cast< A &>(p);
		(void)lol;
		std::cout << 'A' << std::endl;
	}
	catch (std::exception)
	{
	}
	try
	{
		B	&lol = dynamic_cast< B & >(p);
		(void)lol;
		std::cout << 'B' << std::endl;
	}
	catch (std::exception)
	{
	}
	try
	{
		C	&lol = dynamic_cast< C & >(p);
		(void)lol;
		std::cout << 'C' << std::endl;
	}
	catch (std::exception)
	{
	}
}

int	main(void)
{
	for (int i = 0; i < 10; i++)
	{
		std::cout << "Base	*p = generate()" << std::endl
				  << std::endl;
		Base	*p = generate();
		std::cout << "identify(p) : ";
		identify(p);
		std::cout << "identify(*p) : ";
		identify(*p);
		std::cout << std::endl;
		delete p;
	}
	return (0);
}

