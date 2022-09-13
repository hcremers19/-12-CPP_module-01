/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <hcremers@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 11:36:06 by hcremers          #+#    #+#             */
/*   Updated: 2022/09/13 16:53:23 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(weapon)
{
	return ;
}

HumanA::~HumanA()
{
	return ;
}

void		HumanA::setName(std::string name)
{
	this->_name = name;
}

void		HumanA::setWeapon(Weapon weapon)
{
	this->_weapon = weapon;
}

std::string	HumanA::getName()
{
	return (this->_name);
}

Weapon&		HumanA::getWeapon()
{
	return (this->_weapon);
}

void		HumanA::attack()
{
	std::cout << this->getName() << " attacks with their " << this->getWeapon().getType() << std::endl;
}
