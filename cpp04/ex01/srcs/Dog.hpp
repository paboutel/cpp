/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paboutel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 14:53:48 by paboutel          #+#    #+#             */
/*   Updated: 2022/05/30 14:53:50 by paboutel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma	once

#include "Animal.hpp"
#include "Brain.hpp"

class	Dog : public Animal
{
private:
		Brain	*ptrBrain;

public:
	Dog(void);
	Dog(const Dog &otherInstance);
	~Dog(void);

	Dog	&operator=(const Dog &otherInstance);
	virtual void	makeSound(void) const;

};
