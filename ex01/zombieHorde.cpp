/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maar <ael-maar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 08:54:29 by ael-maar          #+#    #+#             */
/*   Updated: 2023/09/12 11:33:00 by ael-maar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    if (N < 0)
        return (NULL);
    Zombie *zombies = new Zombie[N];
    for (int i = 0; i < N; i++)
        zombies[i] = Zombie(name);
    return (zombies);
}
