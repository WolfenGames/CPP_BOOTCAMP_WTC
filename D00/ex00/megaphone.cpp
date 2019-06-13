/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <jwolf@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 14:53:37 by jwolf             #+#    #+#             */
/*   Updated: 2019/06/04 18:11:35 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstdlib>
#include <cstring>
#include <ctype.h>

int main(int ac, char **av)
{
    if (ac == 1) {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    }else
    {
        for (int i = 1; i < ac; i++)
        {
            size_t len = strlen(av[i]);
            for (size_t j = 0; j  < len; j++)
            {
                std::cout << (char)std::toupper(av[i][j]);
            }
        }
        std::cout << std::endl;
    }
    return 0;
}
