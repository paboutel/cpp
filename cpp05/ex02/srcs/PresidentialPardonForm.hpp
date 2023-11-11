/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paboutel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 07:58:14 by paboutel          #+#    #+#             */
/*   Updated: 2022/06/02 07:58:15 by paboutel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "Form.hpp"
# include <string>

class PresidentialPardonForm : public Form
{

private:

	const std::string	target;

	void	beExecuted(void);


public:

	PresidentialPardonForm(const std::string target = "Default Target (no one given)");
	PresidentialPardonForm(const PresidentialPardonForm &otherInst);
	~PresidentialPardonForm(void);

};
