/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <hcremers@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 13:32:21 by hcremers          #+#    #+#             */
/*   Updated: 2022/09/13 16:46:40 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	return;
}

Zombie::Zombie(std::string in) : _name(in)
{
	return;
}

Zombie::~Zombie(void)
{
	std::cout << this->_name << " has been destroyed" << std::endl;

	return;
}

void	Zombie::announce(void) const
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;

	return;
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
	return;
}
