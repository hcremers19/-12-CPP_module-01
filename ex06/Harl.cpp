/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <hcremers@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 14:21:43 by hcremers          #+#    #+#             */
/*   Updated: 2022/09/13 18:43:55 by hcremers         ###   ########.fr       */
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

void	Harl::complain(std::string level)
{
	int			i;	
	void		(Harl::* f[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	lvl[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (i = 0; i < 4; i++)
	{
		if (lvl[i] == level)
			break ;
	}

	switch (i)
	{
		case (0) :
			std::cout << "[ DEBUG ]" << std::endl;
			(this->* (f[0]))();
		case (1) :
			std::cout << "[ INFO ]" << std::endl;
			(this->* (f[1]))();
		case (2) :
			std::cout << "[ WARNING ]" << std::endl;
			(this->* (f[2]))();
		case (3) :
			std::cout << "[ ERROR ]" << std::endl;
			(this->* (f[3]))();
			break;
		case (4) :
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}

	return;
}

void Harl::debug()
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl << std::endl;

	return;
}

void Harl::info()
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl << std::endl;

	return;
}

void Harl::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here last month." << std::endl << std::endl;

	return;
}

void Harl::error()
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl << std::endl;

	return;
}
