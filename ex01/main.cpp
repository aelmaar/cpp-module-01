/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maar <ael-maar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 09:51:44 by ael-maar          #+#    #+#             */
/*   Updated: 2023/09/12 11:36:07 by ael-maar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    int n = 4;
    int n2 = -1;

    // An allocation will happens her
    Zombie *zombies = zombieHorde(n, "ALLOC");
    for (int i = 0; i < n; i++)
        zombies[i].announce();
    delete[] zombies;

    // No allocation will happens
    zombies = zombieHorde(n2, "NULL");
    for (int i = 0; i < n2; i++)
        zombies[i].announce();
    delete[] zombies;
    return (0);
}
