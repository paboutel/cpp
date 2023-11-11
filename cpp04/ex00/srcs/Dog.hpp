/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paboutel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 14:57:22 by paboutel          #+#    #+#             */
/*   Updated: 2022/05/30 14:57:23 by paboutel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma	once

#include "Animal.hpp"

class	Dog : public Animal
{
public:
	Dog(void);
	Dog(const Dog &otherInstance);
	~Dog(void);

	Dog	&operator=(const Dog &otherInstance);
	virtual void	makeSound(void) const;

};
