/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maar <ael-maar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 12:47:46 by ael-maar          #+#    #+#             */
/*   Updated: 2023/09/12 13:01:23 by ael-maar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    // Print the memory addresses
    std::cout << "PINTERS:" << std::endl;
    std::cout << "The memory address of the string variable: " << &str << std::endl;
    std::cout << "The memory address held by the pointer: " << stringPTR << std::endl;
    std::cout << "The memory address held by the reference: " << &stringREF << std::endl;
    
    // Big line
    std::cout << "\n";
    // Print the values
    std::cout << "VALUES:" << std::endl;
    std::cout << "The value of the string variable: " << str << std::endl;
    std::cout << "The value pointed to by stringPTR: " << *stringPTR << std::endl;
    std::cout << "The value pointed to by stringREF: " << stringREF << std::endl; 
}
