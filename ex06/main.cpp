/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <hcremers@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 14:20:16 by hcremers          #+#    #+#             */
/*   Updated: 2022/09/13 18:03:07 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char** argv)
{
	if (argc != 2)
	{
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		return (1);
	}

	Harl harl;

	harl.complain(argv[1]);

	return (0);
}
