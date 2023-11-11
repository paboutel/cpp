/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paboutel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 15:57:59 by paboutel          #+#    #+#             */
/*   Updated: 2022/06/06 15:58:01 by paboutel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N)
: _size(N)
{
	this->_array = new std::vector<int>[N];
}

Span::Span(Span const &src)
{
	*this = src;
}

Span::~Span()
{
	delete[] this->_array;
}

Span	&Span::operator=(const Span &object)
{
	if (this != &object)
	{
		delete this->_array;
		this->_size = object._size;
		this->_array = new std::vector<int>[object._size];
		this->_array->assign(object._array->begin(), object._array->end());
	}
	return (*this);
}

void	Span::addNumber(int nb)
{
	if (this->_array->size() < this->_size)
		this->_array->push_back(nb);
	else
		throw Span::ExistentValueException();
}

void	Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	while (begin != end)
	{
		this->addNumber(*begin);
		begin++;
	}
}

int		Span::longestSpan(void)
{
	std::vector<int>::iterator	max;
	std::vector<int>::iterator	min;

	if (this->_array->size() < 2)
		throw (Span::TooShortException());
	max = std::max_element(this->_array->begin(), this->_array->end());
	min = std::min_element(this->_array->begin(), this->_array->end());
	return (std::abs(*min - *max));
}

int		Span::shortestSpan(void)
{
	std::vector<int>	*sorted;
	int					span;
	int					shortest = INT32_MAX;

	if (this->_array->size() < 2)
		throw (Span::TooShortException());
	sorted = new std::vector<int>[this->_size];
	sorted->assign(this->_array->begin(), this->_array->end());
	std::sort(sorted->begin(), sorted->end());
	for (size_t i = 1; i < sorted->size(); i++)
	{
		span = std::abs(sorted->at(i - 1) - sorted->at(i));
		if (span < shortest)
			shortest = span;
	}
	delete[] sorted;
	return (shortest);
}