/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paboutel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 11:33:43 by paboutel          #+#    #+#             */
/*   Updated: 2022/06/03 11:34:00 by paboutel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data(const unsigned int me)
: me(me)
{
}

Data::~Data(void)
{
}

Data::Data(const Data &otherInst)
{
	*this = otherInst;
}

Data	&Data::operator=(const Data &otherInst)
{
	this->me = otherInst.me;
	return (*this);
}

unsigned int	Data::getValue(void) const
{
	return (this->me);
}