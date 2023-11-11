/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paboutel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 14:57:46 by paboutel          #+#    #+#             */
/*   Updated: 2022/05/30 14:57:47 by paboutel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma	once

#include <string>
#include <iostream>

class WrongAnimal
{
protected:
	std::string type;

public:
	WrongAnimal(const std::string &type = "");
	WrongAnimal(const WrongAnimal &otherInstance);
	~WrongAnimal(void);

	WrongAnimal	&operator=(const WrongAnimal &otherInstance);
	void		makeSound(void) const;
	std::string	getType(void) const;

};
