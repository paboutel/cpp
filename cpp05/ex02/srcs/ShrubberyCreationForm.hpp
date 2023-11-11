/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paboutel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 07:56:38 by paboutel          #+#    #+#             */
/*   Updated: 2022/06/02 07:56:39 by paboutel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "Form.hpp"
# include <string>

# define TREE "\
          . \n\
        (, \n\
        ,| \n\
        |, \n\
       [::] \n\
       [::]   _......_ \n\
       [::].-'      _.-`. \n\
       [:.'    .-. '-._.-`. \n \
       [/ /\\   |  \\        `-..\n\
       / / |   `-.'      .-.   `-. \n\
      /  `-'            (   `.    `. \n \
     |           /\\      `-._/      \\ \n\
     '    .'\\   /  `.           _.-'| \n\
    /    /  /   \\_.-'        _.':;:/ \n\
  .'     \\_/             _.-':;_.-' \n\
 /   .-.             _.-' \\;.-' \n\
/   (   \\       _..-'     | \n\
\\    `._/  _..-'    .--.  | \n\
 `-.....-'/  _ _  .'    '.| \n\
          | |_|_| |      | \\  (o) \n\
     (o)  | |_|_| |      | | (\\,/) \n\
    (\\/)/      |     o|  \\;:; \n\
     :;  |        |      |  |/) \n\
      ;: `-.._    /__..--,\\., ;: \n\
          :;  `--| :;   :;"


class ShrubberyCreationForm : public Form
{

private:

	const std::string	target;

	void	beExecuted(void);


public:

	ShrubberyCreationForm(const std::string target = "Default Target (no one given)");
	ShrubberyCreationForm(const ShrubberyCreationForm &otherInst);
	~ShrubberyCreationForm(void);

};

