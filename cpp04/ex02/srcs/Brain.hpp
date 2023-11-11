/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paboutel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 14:53:21 by paboutel          #+#    #+#             */
/*   Updated: 2022/05/30 14:53:23 by paboutel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class	Brain
{
private:
	std::string	ideas[100];

public:

	Brain(void);
	Brain(const	Brain &otherInst);
	~Brain(void);

	Brain	&operator=(const Brain &otherInst);

};
