/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <hcremers@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 15:37:47 by hcremers          #+#    #+#             */
/*   Updated: 2022/09/15 16:06:00 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie*	zom = new Zombie[N];
	
	for(int i = 0; i < N ; i++)
	{
		zom[i].setName(name + std::to_string(i)); // to_string: forbidden function in c++98
		zom[i].announce();
	}
	return (zom);
}
