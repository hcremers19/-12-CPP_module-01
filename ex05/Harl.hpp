/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <hcremers@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 14:20:53 by hcremers          #+#    #+#             */
/*   Updated: 2022/08/19 15:11:43 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

class Harl
{

private:

    void debug(void);
    void info(void);
    void warning(void);
    void error(void);

public:

    Harl(void);
    ~Harl(void);

    void complain(std::string level);
};
#endif