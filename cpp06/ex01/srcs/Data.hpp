/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paboutel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 11:34:07 by paboutel          #+#    #+#             */
/*   Updated: 2022/06/03 11:38:18 by paboutel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma	once

#include <stdint.h>

class	Data
{
private:
	unsigned int	me;

public:
	Data(const unsigned int me = 0);
	Data(const Data &otherInst);
	~Data(void);

	Data	&operator=(const Data &otherInst);

	unsigned int	getValue(void) const;
};