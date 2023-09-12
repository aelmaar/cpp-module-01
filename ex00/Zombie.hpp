/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maar <ael-maar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 15:10:12 by ael-maar          #+#    #+#             */
/*   Updated: 2023/09/11 18:43:13 by ael-maar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
    private:
        std::string name;
    public:
        Zombie(std::string &name);
        void    announce(void);
        ~Zombie();
};

Zombie* newZombie( std::string name );
void    randomChump( std::string name );

#endif
