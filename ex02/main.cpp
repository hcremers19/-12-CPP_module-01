/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <hcremers@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 16:16:04 by hcremers          #+#    #+#             */
/*   Updated: 2022/08/23 14:12:46 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
    std::string		str = "HI THIS IS BRAIN";
    std::string*	stringPTR = &str;
    std::string&	stringREF = str;

    std::cout << "stringPTR: " << std::endl;
    std::cout << stringPTR << std::endl << std::endl;
    std::cout << "&stringREF: " << std::endl;
    std::cout << &stringREF << std::endl << std::endl;

    std::cout << "*stringPTR: " << std::endl;
    std::cout << *stringPTR << std::endl << std::endl;
    std::cout << "stringREF: " << std::endl;
    std::cout << stringREF << std::endl << std::endl;
}