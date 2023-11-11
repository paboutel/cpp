/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paboutel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 18:30:09 by paboutel          #+#    #+#             */
/*   Updated: 2022/05/18 18:30:10 by paboutel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie  *Zombie::newZombie(std::string name)
{
    Zombie *zombie = new Zombie(name);
    return (zombie);
}
