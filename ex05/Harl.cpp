/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <hcremers@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 14:21:43 by hcremers          #+#    #+#             */
/*   Updated: 2022/09/13 18:10:11 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Harl.hpp"

Harl::Harl()
{
	return;
}

Harl::~Harl()
{
	return;
}

void Harl::complain(std::string level)
{
	void			(Harl::* f[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string 	lvl[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
		if (!lvl[i].compare(level))
		{
			(this->* f[i])();
			return;
		}

	std::cout << "What do you want, bonehead?" << std::endl;

	return;
}

void Harl::debug()
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;

	return;
}

void Harl::info()
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;

	return;
}

void Harl::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here last month." << std::endl;

	return;
}

void Harl::error()
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;

	return;
}
