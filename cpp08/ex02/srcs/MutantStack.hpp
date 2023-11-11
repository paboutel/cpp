/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paboutel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 20:41:26 by paboutel          #+#    #+#             */
/*   Updated: 2022/06/06 20:41:27 by paboutel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>

template <typename T>
class	MutantStack : public std::stack<T>
{
	public:
		MutantStack();
		MutantStack(MutantStack<T> const & src);
		~MutantStack();

		MutantStack &	operator=(MutantStack const & rhs);

	typedef typename std::stack<T>::container_type::iterator				iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator		reverse_iterator;
	typedef typename std::stack<T>::container_type::const_iterator			const_iterator;
	typedef typename std::stack<T>::container_type::const_reverse_iterator	const_reverse_iterator;

	iterator				begin(void);
	iterator				end(void);
	reverse_iterator		rbegin(void);
	reverse_iterator		rend(void);
	const_iterator			cbegin(void);
	const_iterator			cend(void);
	const_reverse_iterator	crbegin(void);
	const_reverse_iterator	crend(void);
};