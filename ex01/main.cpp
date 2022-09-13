/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <hcremers@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 13:28:06 by hcremers          #+#    #+#             */
/*   Updated: 2022/09/13 16:47:43 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#define NBR 10

Zombie	*zombieHorde(int nb, std::string name);

int main(void)
{
	Zombie*	horde = zombieHorde(NBR, "Bob");

	std::cout << std::endl;
	for (int i = 0; i < NBR; i++)
		horde[i].announce();

	std::cout << std::endl;
	delete [] horde;

	return (0);
}
