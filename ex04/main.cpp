/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <hcremers@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 19:19:31 by hcremers          #+#    #+#             */
/*   Updated: 2022/08/24 17:05:43 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

std::string ft_replace(std::string input, std::string s1, std::string s2)
{
	for (size_t cursor = 0; cursor < input.length(); cursor++)
	{
		if (input.compare(cursor, s1.length(), s1) == 0)
		{
			input.erase(cursor, s1.length());
			input.insert(cursor, s2);
			cursor += s2.length() - 1;
		}
	}
	return (input);
}

int main(int argc, char** argv)
{
	std::string		input;

	if (argc != 4)
	{
		std::cout << "Syntax: <file> <s1> <s2>" << std::endl;
		return (1);
	}
	std::string		filename(argv[1]);
	std::string		s1(argv[2]);
	std::string		s2(argv[3]);

	std::ifstream	ifs(filename);
	
	if (!ifs.is_open())
	{
		std::cout << "File error" << std::endl;
		return (1);
	}

	std::ofstream 	ofs((std::string)filename + ".replace");

	while(getline(ifs, input))
			ofs << ft_replace(input, s1, s2) << std::endl;
	ifs.close();
	ofs.close();
	return (0);
}
