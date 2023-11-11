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



template<typename T>
MutantStack<T>::MutantStack(): std::stack<T>()
{
}

template<typename T>
MutantStack<T>::MutantStack(const MutantStack<T> &copy): std::stack<T>(copy)
{
	*this = copy;
}

template<typename T>
MutantStack<T>::~MutantStack()
{
}

template<typename T>
MutantStack<T>	&MutantStack<T>::operator=(const MutantStack<T> &object)
{
	if (this == &object)
		this->c = object.c;
	return (*this);
}

template<typename T>
typename std::stack<T>::container_type::iterator	MutantStack<T>::begin(void)
{
	return (this->c.begin());
}

template<typename T>
typename std::stack<T>::container_type::iterator	MutantStack<T>::end(void)
{
	return (this->c.end());
}

template<typename T>
typename std::stack<T>::container_type::reverse_iterator	MutantStack<T>::rbegin(void)
{
	return (this->c.rbegin());
}

template<typename T>
typename std::stack<T>::container_type::reverse_iterator	MutantStack<T>::rend(void)
{
	return (this->c.rend());
}

template<typename T>
typename std::stack<T>::container_type::const_iterator	MutantStack<T>::cbegin(void)
{
	return (this->c.cbegin());
}

template<typename T>
typename std::stack<T>::container_type::const_iterator	MutantStack<T>::cend(void)
{
	return (this->c.cend());
}

template<typename T>
typename std::stack<T>::container_type::const_reverse_iterator	MutantStack<T>::crbegin(void)
{
	return (this->c.crbegin());
}

template<typename T>
typename std::stack<T>::container_type::const_reverse_iterator	MutantStack<T>::crend(void)
{
	return (this->c.crend());
}
