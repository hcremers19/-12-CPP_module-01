/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <hcremers@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 11:38:45 by hcremers          #+#    #+#             */
/*   Updated: 2022/09/13 16:55:08 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
	private:
		std::string _name;
		Weapon*		_weapon;

	public:
		HumanB(std::string name);
		~HumanB();

		void		attack();

		std::string	getName();
		Weapon*		getWeapon();

		void		setName(std::string name);
		void		setWeapon(Weapon& weapon);
};

#endif