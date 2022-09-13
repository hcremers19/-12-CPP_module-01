/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <hcremers@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 11:38:45 by hcremers          #+#    #+#             */
/*   Updated: 2022/08/18 15:32:04 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
	private:
		Weapon*		_weapon;
		std::string _name;

	public:
		HumanB(std::string name);
		~HumanB();

		void		attack(void);

		std::string	getName(void);
		Weapon*		getWeapon(void);
		void		setName(std::string name);
		void		setWeapon(Weapon& weapon);
};

#endif