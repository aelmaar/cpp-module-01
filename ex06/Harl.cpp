/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maar <ael-maar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:32:33 by ael-maar          #+#    #+#             */
/*   Updated: 2023/09/14 13:50:26 by ael-maar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

// Implementation of the constructor
Harl::Harl()
{
    level_functions[0] = &Harl::debug;
    level_functions[1] = &Harl::info;
    level_functions[2] = &Harl::warning;
    level_functions[3] = &Harl::error;
    level_names[0] = "DEBUG";
    level_names[1] = "INFO";
    level_names[2] = "WARNING";
    level_names[3] = "ERROR";
}

int Harl::get_level_index(std::string &level) const
{
    for (int i = 0; i < 4; i++)
    {
        if (level_names[i] == level)
            return (i);
    }
    return (-1);
}

void    Harl::debug(void)
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void    Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money.\nYou didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void    Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month." << std::endl;
}

void    Harl::error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void    Harl::print_levels(int level_index)
{
    if (level_index == -1)
    {
        std::cerr << "Probably complaining about insignificant problems" << std::endl;
        return ;
    }
    std::cout << "[ " << level_names[level_index] << " ]" << std::endl;
    (this->*level_functions[level_index])();
    std::cout << std::endl;
}

void    Harl::complain(std::string level)
{
    if (level.empty())
    {
        std::cerr << "No level specified" << std::endl;
        return ;
    }
    int level_index = get_level_index(level);
    switch (level_index)
    {
        case 0:
            print_levels(0);
        case 1:
            print_levels(1);
        case 2:
            print_levels(2);
        case 3:
            print_levels(3);
            break;
        default:
            print_levels(-1);
    }
}
