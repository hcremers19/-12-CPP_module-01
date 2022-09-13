/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <hcremers@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 17:00:36 by hcremers          #+#    #+#             */
/*   Updated: 2022/08/18 15:33:29 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
	private:
		std::string	_name;
		Weapon&		_weapon;

	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA();

	void		attack(void);
		
	std::string	getName(void);
	Weapon&		getWeapon(void);

	void		setName(std::string name);
	void		setWeapon(Weapon weapon);
};

#endif