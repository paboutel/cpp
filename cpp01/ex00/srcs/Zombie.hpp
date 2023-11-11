/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paboutel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 17:52:34 by paboutel          #+#    #+#             */
/*   Updated: 2022/05/11 17:52:35 by paboutel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class Zombie
{
    private:
        const std::string name;

    public:
        Zombie(std::string name);
        ~Zombie(void);

		static Zombie*	newZombie(std::string name);
		static void		randomChump(std::string name);

        void			announce(void) const;
};

#endif