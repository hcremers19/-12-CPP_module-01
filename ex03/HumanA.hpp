/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <hcremers@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 17:00:36 by hcremers          #+#    #+#             */
/*   Updated: 2022/09/13 16:55:03 by hcremers         ###   ########.fr       */
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
		HumanA(std::string name, Weapon& weapon);
		~HumanA();

		void		attack();
			
		std::string	getName();
		Weapon&		getWeapon();

		void		setName(std::string name);
		void		setWeapon(Weapon weapon);
};

#endif