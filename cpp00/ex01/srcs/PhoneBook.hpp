/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paboutel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 16:40:02 by paboutel          #+#    #+#             */
/*   Updated: 2022/05/08 16:40:05 by paboutel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
#define PHONE_BOOK_HPP

# include "Contact.hpp"
# include <string>

class PhoneBook
{
	
private:

	Contact				Contacts[8];

	static const int	max_amount;
	int					amount;

	static bool	is_valid_search_index(std::string buffer, int amount);
	static void	display_search_header(void);

public:

	PhoneBook(void);
	~PhoneBook(void);

	void	add(void);
	void	search(void) const;

};

#endif
