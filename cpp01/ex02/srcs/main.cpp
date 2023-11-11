/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paboutel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 18:33:38 by paboutel          #+#    #+#             */
/*   Updated: 2022/05/18 18:33:56 by paboutel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main()
{
	std::string str("HI THIS IS BRAIN");
	std::string *strPTR = &str;
	std::string &strREF = str;

	std::cout << "&str: " << &str << "|" << strPTR << "|" << &strREF << std::endl;
	std::cout << "str: " << str << "|" << *strPTR << "|" << strREF << std::endl;
}
