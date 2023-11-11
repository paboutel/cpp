/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paboutel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 14:53:34 by paboutel          #+#    #+#             */
/*   Updated: 2022/05/30 14:53:36 by paboutel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma	once

#include "Animal.hpp"
#include "Brain.hpp"

class	Cat : public Animal
{
private:
		Brain	*ptrBrain;
public:
	Cat(void);
	Cat(const Cat &otherInstance);
	~Cat(void);

	Cat	&operator=(const Cat &otherInstance);
	virtual void	makeSound(void) const;

};
