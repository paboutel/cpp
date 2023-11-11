/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paboutel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 14:58:01 by paboutel          #+#    #+#             */
/*   Updated: 2022/05/30 14:58:02 by paboutel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma	once

#include "WrongAnimal.hpp"

class	WrongCat : public WrongAnimal
{
public:
	WrongCat(void);
	WrongCat(const WrongCat &otherInstance);
	~WrongCat(void);

	WrongCat	&operator=(const WrongCat &otherInstance);
	void	makeSound(void) const;

};
