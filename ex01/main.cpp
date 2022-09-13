/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <hcremers@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 13:28:06 by hcremers          #+#    #+#             */
/*   Updated: 2022/08/23 14:10:42 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int nb, std::string name);

int main(void)
{
	Zombie*	horde = zombieHorde(10, "Bob");

	std::cout << std::endl;
	for (int i = 0; i < 10; i++)
		horde[i].announce();
	delete [] horde;

	return (0);
}
