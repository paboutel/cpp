/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paboutel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 18:07:42 by paboutel          #+#    #+#             */
/*   Updated: 2022/06/05 18:07:44 by paboutel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma	once

#include <iostream>
#include <exception>

template<typename T>
class Array
{

private:

	unsigned int	_size;
	T				*content;


public:

	Array(const unsigned int n = 0);
	Array(const Array &otherInst);
	~Array(void);

	Array	&operator=(const Array &otherInst);
	T		&operator[](const long long int index);

	class	WrongMemoryAccess : public std::exception
	{
	public:
		virtual const char	*what() const throw() { return ("WrongMemoryAccess"); }
	};

	unsigned int	size(void) const;

};

template<typename T>
Array<T>::Array(const unsigned int n)
: _size(n), content(new T[n]())
{
}

template<typename T>
Array<T>::Array(const Array<T> &otherInst)
: _size(otherInst._size), content(new T[otherInst._size])
{
	for (unsigned int i = 0; i < this->_size; i++)
		this->content[i] = otherInst.content[i];
}

template<typename T>
Array<T>::~Array(void)
{
	delete [] this->content;
}

template<typename T>
Array<T>	&Array<T>::operator=(const Array<T> &otherInst)
{
	delete [] this->content;
	this->_size = otherInst._size;
	this->content = new T[this->_size];
	for (unsigned int i = 0; i < this->_size; i++)
		this->content[i] = otherInst.content[i];
	return (*this);
}

template<typename T>
T		&Array<T>::operator[](const long long int index)
{
	if (index >= (this->_size) || index < 0) 
		throw Array<T>::WrongMemoryAccess ();
	return (this->content[index]);
}

template<typename T>
unsigned int	Array<T>::size(void) const
{
	return (this->_size);
}

template<typename T>
void	printArray(Array<T> &ref, const std::string &name)
{
	std::cout << "Printing array " << name << " (size = " << ref.size() << ") :" << std::endl;
	for (unsigned int i = 0; i < ref.size(); i++)
		std::cout << ref[i] << " ";
	std::cout << std::endl;
}
