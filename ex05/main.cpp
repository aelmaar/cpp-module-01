/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maar <ael-maar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:32:35 by ael-maar          #+#    #+#             */
/*   Updated: 2023/09/13 17:28:13 by ael-maar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
    Harl    harl;

    harl.complain("DEBUG");
    harl.complain("INFO");
    harl.complain("WARNING");
    harl.complain("ERROR");
    harl.complain("lol");
    harl.complain("");
    return (EXIT_SUCCESS);
}
