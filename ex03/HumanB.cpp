/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <hcremers@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 11:39:53 by hcremers          #+#    #+#             */
/*   Updated: 2022/08/18 15:31:44 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void		HumanB::setName(std::string name)
{
	this->_name = name;
}

void		HumanB::setWeapon(Weapon& weapon)
{
	this->_weapon = &weapon;
}

std::string	HumanB::getName(void)
{
	return (this->_name);
}

Weapon*		HumanB::getWeapon(void)
{
	return (this->_weapon);
}

void		HumanB::attack(void)
{
	std::cout << this->getName() << " attacks with their " << this->getWeapon()->getType() << std::endl;
}

HumanB::HumanB(std::string name) : _name(name)
{
	return ;
}

HumanB::~HumanB()
{
	return ;
}
