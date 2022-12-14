/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <hcremers@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 13:28:06 by hcremers          #+#    #+#             */
/*   Updated: 2022/09/13 16:07:53 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

int	main(void)
{
	Zombie*	foo = new Zombie("Foo");
	foo->announce();
	delete foo;

	Zombie*	bar = newZombie("Bar");
	bar->announce();
	delete bar;

	randomChump("Huf");

	return (0);
}
