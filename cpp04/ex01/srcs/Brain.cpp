/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paboutel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 14:53:14 by paboutel          #+#    #+#             */
/*   Updated: 2022/05/30 14:53:15 by paboutel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	for(int i = 0; i < 100 ; i++)
		this->ideas[i] = "ideas" + i;
}

Brain::Brain(const	Brain &otherInst)
{
	for(int i = 0; i < 100 ; i++)
		this->ideas[i] = otherInst.ideas[i];
}

Brain::~Brain(void)
{
}

Brain	&Brain::operator=(const Brain &otherInst)
{
	for(int i = 0; i < 100 ; i++)
		this->ideas[i] = otherInst.ideas[i];
	return (*this);
}
