/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maar <ael-maar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 13:39:03 by ael-maar          #+#    #+#             */
/*   Updated: 2023/09/12 17:11:53 by ael-maar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

// Implementation of the constructor
Weapon::Weapon(std::string type): type(type) {}

const std::string &Weapon::getType(void) const
{
    return (type);
}

void    Weapon::setType(std::string type)
{
    this->type = type;
}
