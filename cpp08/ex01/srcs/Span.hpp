/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paboutel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 15:57:42 by paboutel          #+#    #+#             */
/*   Updated: 2022/06/06 15:57:43 by paboutel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include <vector>
# include <iterator>
# include <algorithm>
# include <sys/time.h>
# include <stdlib.h>
# include <stdint.h>

class	Span
{
private:
	std::vector<int>	*_array;
	unsigned int		_size;

public:
	Span(unsigned int size);
	Span(Span const &src);
	~Span();

	Span &operator=(Span const &rhs);

	void	addNumber(int nb);
	void	addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
	int		shortestSpan();
	int		longestSpan();

	class ExistentValueException: public std::exception
	{
	public:
		ExistentValueException(void) throw() {};
		~ExistentValueException() throw() {};
		virtual const char	*what(void) const throw() {
			return ("Exception:ExistentValue");
		};
	};

	class TooShortException: public std::exception
	{
	public:
		TooShortException(void) throw() {};
		~TooShortException() throw() {};
		virtual const char	*what(void) const throw() {
			return ("Exception:TooShort");
		};
	};
};

