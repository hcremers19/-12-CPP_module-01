/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <hcremers@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 11:39:53 by hcremers          #+#    #+#             */
/*   Updated: 2022/09/13 16:54:16 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
	return ;
}

HumanB::~HumanB()
{
	return ;
}

void		HumanB::setName(std::string name)
{
	this->_name = name;
}

void		HumanB::setWeapon(Weapon& weapon)
{
	this->_weapon = &weapon;
}

std::string	HumanB::getName()
{
	return (this->_name);
}

Weapon*		HumanB::getWeapon()
{
	return (this->_weapon);
}

void		HumanB::attack()
{
	std::cout << this->getName() << " attacks with their " << this->getWeapon()->getType() << std::endl;
}
