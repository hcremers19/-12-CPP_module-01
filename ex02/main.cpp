/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <hcremers@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 16:16:04 by hcremers          #+#    #+#             */
/*   Updated: 2022/09/13 16:45:38 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string		str = "HI THIS IS BRAIN";
	std::string*	stringPTR = &str;
	std::string&	stringREF = str;

	std::cout << "Memory address of str: " 				<< &str			<< std::endl;
	std::cout << "Memory address held by stringPTR: "	<< stringPTR	<< std::endl;
	std::cout << "Memory address held by stringREF: "	<< &stringREF	<< std::endl << std::endl;

	std::cout << "Value of str: " 					<< str			<< std::endl;
	std::cout << "Value pointed to by stringPTR: "	<< *stringPTR	<< std::endl;
	std::cout << "Value pointed to by stringREF: "	<< stringREF	<< std::endl << std::endl;

	return (0);
}
