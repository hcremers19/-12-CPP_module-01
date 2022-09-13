/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <hcremers@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 13:29:25 by hcremers          #+#    #+#             */
/*   Updated: 2022/09/13 16:46:48 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
	public:
		Zombie(void);
		Zombie(std::string name);
		~Zombie(void);

		void	announce(void) const;
		void	setName(std::string name);

	private:
		std::string	_name;
};

#endif