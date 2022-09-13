/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <hcremers@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 14:20:16 by hcremers          #+#    #+#             */
/*   Updated: 2022/08/19 15:08:27 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl ppl;

	ppl.complain("DEBUG");
	ppl.complain("INFO");
	ppl.complain("WARNING");
	ppl.complain("ERROR");
}
