/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maar <ael-maar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 15:24:52 by ael-maar          #+#    #+#             */
/*   Updated: 2023/09/12 08:52:51 by ael-maar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    // Testing for an allocated zombie
    Zombie *zombie = newZombie("SEGV");

    zombie->announce();
    delete zombie;

    // Testing for an unallocated zombie (in stack)
    randomChump("NULL");
    
    return (0);
}
