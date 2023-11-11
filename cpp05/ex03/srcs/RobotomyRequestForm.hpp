/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paboutel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 07:57:58 by paboutel          #+#    #+#             */
/*   Updated: 2022/06/02 07:57:59 by paboutel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "Form.hpp"
# include <string>

class RobotomyRequestForm : public Form
{

private:

	const std::string	target;
	bool				shunt;

	void	beExecuted(void);


public:

	RobotomyRequestForm(const std::string target = "Default Target (no one given)");
	RobotomyRequestForm(const RobotomyRequestForm &otherInst);
	~RobotomyRequestForm(void);

};
