/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paboutel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 16:39:54 by paboutel          #+#    #+#             */
/*   Updated: 2022/05/09 16:36:12 by paboutel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>

const int	PhoneBook::max_amount = 8;

PhoneBook::PhoneBook(void)
: amount(0)
{
	for (int i = 0; i < this->max_amount; i++)
		this->Contacts[i].set_index(i);
}
PhoneBook::~PhoneBook(void)
{
}

void	PhoneBook::add(void)
{
	if (this->amount >= this->max_amount)
		std::cout << "/* MAX AMOUNT OF CONTACT REACH, RESET AT 0   */" << std::endl;
	this->Contacts[this->amount % this->max_amount].set_fields_value();
	this->amount++;
	if (this->amount == (this->max_amount * 2))
		this->amount = this->max_amount;
}

bool	PhoneBook::is_valid_search_index(std::string buffer, int amount)
{
	return (!(buffer.length() != 1 || !(buffer.at(0) >= '0' && (buffer.at(0) - '0') < amount && (buffer.at(0) - '0') < max_amount)));
}

void	PhoneBook::display_search_header(void)
{
	std::cout << "/* ***************************************** */" << std::endl
			  << "/*" << std::setw(Contact::preview_column_width) << "index";
	for (int i = Contact::first_name; i <= Contact::nickname; i++)
		std::cout << '|' << std::setw(Contact::preview_column_width) << Contact::fields_name[i];
	std::cout << "*/" << std::endl
			  << "/* ***************************************** */" << std::endl;
}

void	PhoneBook::search(void) const
{
	std::string	buffer;

	if (!this->amount)
	{
		std::cout << "/* YOU NEED TO ADD A CONTACT FIRST !!!       */" << std::endl;
		return ;
	}
	this->display_search_header();
	for (int i = 0; i < this->amount && i < this->max_amount; i++)
		this->Contacts[i].display_preview_fields();
	std::cout << "/* ***************************************** */" << std::endl;
	while (!is_valid_search_index(buffer, this->amount) || buffer == "")
	{
		std::cout << "/* TYPE AN INDEX BETWEEN 0 AND "
				  << (((this->amount < this->max_amount) ? (this->amount) : (this->max_amount)) - 1) << "             */" << std::endl;
		std::cout << "/* ***************************************** */" << std::endl;
		std::cout << "/* ";
		std::getline(std::cin, buffer);
		if (!std::cin.good())
			return ;
		if (!is_valid_search_index((buffer), this->amount))
		{
			std::cout << "/* ***************************************** */" << std::endl;
			std::cout << "/* WRONG INDEX !!!                           */" << std::endl;
		}
	}
	this->Contacts[buffer.at(0) - '0'].display_all_fields();
}
