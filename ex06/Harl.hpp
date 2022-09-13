/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <hcremers@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 14:20:53 by hcremers          #+#    #+#             */
/*   Updated: 2022/09/13 17:37:37 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class Harl
{
	private:
		void debug();
		void info();
		void warning();
		void error();

	public:
		Harl();
		~Harl();

		void complain(std::string level);
};

#endif