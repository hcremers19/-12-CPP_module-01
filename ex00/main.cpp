/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <hcremers@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 13:28:06 by hcremers          #+#    #+#             */
/*   Updated: 2022/08/17 15:27:37 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

int	main(void)
{
	Zombie*	bob = new Zombie("Zombie Bob");
	Zombie*	pat;

	bob->announce();
	delete bob;

	pat = newZombie("Zombie Pat");
	pat->announce();
	delete pat;

	randomChump("Kev");

	return (0);
}