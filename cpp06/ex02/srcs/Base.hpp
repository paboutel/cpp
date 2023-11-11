/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paboutel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 20:38:04 by paboutel          #+#    #+#             */
/*   Updated: 2022/06/03 20:38:05 by paboutel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma	once

class	Base
{
public:
	virtual	~Base() {};

};

class	A: public Base {};
class	B: public Base {};
class	C: public Base {};
