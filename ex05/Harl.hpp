/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maar <ael-maar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:32:31 by ael-maar          #+#    #+#             */
/*   Updated: 2023/09/13 17:15:33 by ael-maar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include "iostream"

class Harl
{
    private:
        typedef void (Harl::*LevelFunction)();
        void          debug(void);
        void          info(void);
        void          warning(void);
        void          error(void);
        LevelFunction level_functions[4];
        const char    *level_names[4];
        int           get_level_index(std::string &level);
    public:
        Harl();
        void    complain(std::string level);
};


#endif
