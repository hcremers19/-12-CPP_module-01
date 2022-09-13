/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <hcremers@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 11:36:06 by hcremers          #+#    #+#             */
/*   Updated: 2022/08/18 15:34:01 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void		HumanA::setName(std::string name)
{
	this->_name = name;
}

void		HumanA::setWeapon(Weapon weapon)
{
	this->_weapon = weapon;
}

std::string	HumanA::getName(void)
{
	return (this->_name);
}

Weapon&		HumanA::getWeapon(void)
{
	return (this->_weapon);
}

void		HumanA::attack(void)
{
	std::cout << this->getName() << " attacks with their " << this->getWeapon().getType() << std::endl ;
}

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(weapon)
{
	return ;
}

HumanA::~HumanA()
{
	return ;
}