/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maar <ael-maar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:32:35 by ael-maar          #+#    #+#             */
/*   Updated: 2023/09/14 13:47:55 by ael-maar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char *av[])
{
    Harl    harl;

    if (ac != 2)
    {
        std::cerr << "Please specify 1 argument: LEVEL" << std::endl;
        return (EXIT_FAILURE);
    }
    harl.complain(av[1]);
    return (EXIT_SUCCESS);
}
