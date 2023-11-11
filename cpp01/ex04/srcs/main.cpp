/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paboutel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 18:40:22 by paboutel          #+#    #+#             */
/*   Updated: 2022/05/15 18:40:23 by paboutel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

int	occurrence_error(std::fstream *file, std::string const str)
{
	if (file != NULL)
		file->close();
	std::cout << str << std::endl;
	return (1);
}

void	replace_line(std::fstream &replace, std::string content, std::string str, std::string str_replace)
{
	std::size_t i;
	std::size_t pos;

	i = 0;
	pos = 0;
	while (i != std::string::npos)
	{
		i = content.find(str, pos);
		if (i != std::string::npos)
		{
			replace << content.substr(pos, i - pos);
			replace << str_replace;
			pos = i + str.length();
		}
		else
			replace << content.substr(pos, content.length() - pos);
	}
}

void	replace_file(std::fstream &file, std::fstream &replace, std::string str, std::string str_replace)
{
	std::string content;

	while (file.eof() == false)
	{
		std::getline(file, content);
		if (str.empty() == true)
			replace <<content;
		else
			replace_line(replace, content, str, str_replace);
		if (file.eof() == false)
			replace << std::endl;
	}
}

int	main(const int argc, const char **argv)
{
	std::fstream	file;
	std::fstream	replace;
	std::string		replace_name;

	if (argc != 4)
		return (occurrence_error(NULL, "Wrong number of argment(need 3)"));

	file.open(argv[1], std::fstream::in);
	if (file.is_open() == false)
		return (occurrence_error(NULL, "We can't open the first file"));

	replace_name = std::string(argv[1]) + std::string(".replace");

	replace.open(replace_name.c_str(), std::fstream::out | std::fstream::trunc);
	if (replace.is_open() == false)
		return (occurrence_error(NULL, "We can't open the clone file .replace"));

	replace_file(file, replace, std::string(argv[2]), std::string(argv[3]));

	file.close();
	replace.close();
	return (0);
}
