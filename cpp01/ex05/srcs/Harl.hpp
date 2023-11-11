/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paboutel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 18:40:14 by paboutel          #+#    #+#             */
/*   Updated: 2022/05/18 18:40:15 by paboutel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma	once

#include <string>
#include <iostream>

class Harl
{
private:
	void	debug( void );
	void	info( void );
	void	warning( void );
	void	error( void );

public:
	Harl();
	~Harl();
	void	complain( std::string level );
};

typedef struct s_complain
{
	std::string complain;
	void		(Harl::*function)(void);
}				t_complain;
