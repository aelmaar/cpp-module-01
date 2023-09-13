/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maar <ael-maar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:26:28 by ael-maar          #+#    #+#             */
/*   Updated: 2023/09/13 13:29:59 by ael-maar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

void    read_whole_file(const std::string &filename, std::string &file_content)
{
    std::fstream    file(filename);
    std::ostringstream oss;
    
    if (!file.is_open())
    {
        std::cerr << filename << ": " << strerror(errno) << std::endl;
        exit(EXIT_FAILURE);
    }
    oss << file.rdbuf();
    file_content = oss.str();
}

void    find_occ_and_replace(char *av[], const std::string &file_content, std::string &new_file_content)
{
    size_t  pos = 0;
    size_t  file_content_len = file_content.length();

    while (pos < file_content_len)
    {
        size_t  search_occ = file_content.find(av[2], pos);
        if (search_occ != std::string::npos)
        {
            new_file_content += file_content.substr(pos, search_occ - pos);
            
            new_file_content += av[3];

            pos = (search_occ + std::strlen(av[2]));
        }
        else
        {
            new_file_content += file_content.substr(pos);
            break;
        }
    }
}

int main(int ac, char *av[])
{
    std::string   file_content;
    std::fstream  new_replaced_filename;
    std::string   new_file_content;

    if (ac != 4)
    {
        std::cerr << "Please specify 3 args: filename, s1, s2" << std::endl;
        return (EXIT_FAILURE);
    }
    // read the file buffer stream and assign it to file content
    read_whole_file(av[1], file_content);
    // open the new filename in write, truncate mode
    new_replaced_filename.open(std::string(av[1]) + ".replace", std::fstream::out | std::fstream::trunc);
    if (!new_replaced_filename.is_open())
    {
        std::cerr << av[1] << ".replace" << ": " << strerror(errno) << std::endl;
        exit(EXIT_FAILURE);
    }
    // find the occurrences and replaced them with s2 (av[3])
    find_occ_and_replace(av, file_content, new_file_content);
    // write the newly resulted file content to the new filename.replace file
    new_replaced_filename << new_file_content;
    new_replaced_filename.close();
    return (EXIT_SUCCESS);
}
