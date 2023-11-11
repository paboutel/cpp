/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paboutel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 17:00:20 by paboutel          #+#    #+#             */
/*   Updated: 2022/06/02 17:00:21 by paboutel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class	Convert
{
private:
	double value;

public:
	Convert(void);
	Convert(const char *data);
	~Convert();
	Convert(const Convert &otherInst);

	Convert	&operator=(const Convert &otherInst);

	void	displayAll(void) const;
	void	displayChar(void) const;
	void	displayInt(void) const;
	void	displayFloat(void) const;
	void	displayDouble(void) const;
};