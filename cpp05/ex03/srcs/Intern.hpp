/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paboutel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 08:30:28 by paboutel          #+#    #+#             */
/*   Updated: 2022/06/02 08:30:29 by paboutel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "Form.hpp"
# include <string>

class Intern
{

private:

	static const std::string	formList[3];
	enum { SHRUBBERY_CREATION, ROBOTOMY_REQUEST, PRESIDENTIAL_PARDON, OUT_OF_RANGE };


public:

	Intern(void);
	~Intern(void);

	Form	*makeForm(const std::string &type, const std::string &target) const;

};
