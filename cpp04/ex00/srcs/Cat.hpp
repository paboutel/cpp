/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paboutel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 14:57:09 by paboutel          #+#    #+#             */
/*   Updated: 2022/05/30 14:57:10 by paboutel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma	once

#include "Animal.hpp"

class	Cat : public Animal
{
public:
	Cat(void);
	Cat(const Cat &otherInstance);
	~Cat(void);

	Cat	&operator=(const Cat &otherInstance);
	virtual void	makeSound(void) const;

};
