/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <jwolf@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 15:04:23 by jwolf             #+#    #+#             */
/*   Updated: 2019/06/05 18:42:31 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <istream>
#include <stdlib.h>
#include "Phonebook.class.hpp"

Phonebook   newPhonebookEntry(Phonebook curr)
{
    std::string val;
    std::getline(std::cin, val);
    std::cout << std::endl;

    bool    login = false;
    while (!login)
    {
        std::cout << "What is your login?? *Mandatory :";
        std::getline(std::cin, val);
        if (!val.empty())
            login = true;
    }
    curr.setLogin(val);
    std::cout << std::endl;    

    bool firstName = false;
    while (!firstName)
    {
        std::cout << "What is your FirstName?? *Mandatory :";
        std::getline(std::cin, val);
        if (!val.empty())
            firstName = true;
    }
    curr.setFirstName(val);
    std::cout << std::endl;
    
    bool    lastName = false;
    while (!lastName)
    {
        std::cout << "What is your LastName?? *Mandatory :";
        std::getline(std::cin, val);
        if (!val.empty())
            lastName = true;
    }
    curr.setLastName(val);
    std::cout << std::endl;
    
    std::cout << "What is your NickName?? :";
    std::getline(std::cin, val);
    curr.setNickName(val);
    std::cout << std::endl;
    
    std::cout << "What is your PostalCode?? :";
    std::getline(std::cin, val);
    curr.setPostalCode(val);
    std::cout << std::endl;
    
    std::cout << "What is your Email Address?? :";
    std::getline(std::cin, val);
    curr.setEmail(val);
    std::cout << std::endl;
    
    std::cout << "What is your Phone Number?? :";
    std::getline(std::cin, val);
    curr.setPhonenumber(val);
    std::cout << std::endl;
    
    std::cout << "What is your Birthday?? :";
    std::getline(std::cin, val);
    curr.setBirthday(val);
    std::cout << std::endl;
    
    std::cout << "What is your Favorite Meal?? :";
    std::getline(std::cin, val);
    curr.setFavoriteMeal(val);
    std::cout << std::endl;
    
    std::cout << "What is your Underwear Color?? :";
    std::getline(std::cin, val);
    curr.setUnderwearColor(val);
    std::cout << std::endl;
    
    std::cout << "What is your DarkSecret?? :";
    std::getline(std::cin, val);
    curr.setDarkSecret(val);
    std::cout << "ADD Done." << std::endl;

    return curr;
}

int     main(void)
{
    Phonebook   book[8];
    while (true)
    {
        std::string val;
        std::cin >> val;
        
        if (val.compare("ADD") == 0)
        {
            if (book[7].getLogin().empty())
            {
                int i = 0;
                while (i < 8)
                {
                    if (book[i].getLogin().empty())
                    {
                        book[i] = newPhonebookEntry(book[i]);
                        break;
                    }
                    i++;
                }
            }else
            {
                std::cout << "Contact list is full." << std::endl;
                break;
            }
            
        }
        else if (val.compare("SEARCH") == 0)
        {
            size_t  len = sizeof(book)/sizeof(book[0]);
            std::cout << "     Index|First Name| Last Name|  Nickname" << std::endl;
            std::string firstName, lastName, nickName;
            for (size_t i = 0; i < len; i++)
            {
                if (!book[i].getLogin().empty())
                {
                    firstName = book[i].getFirstName();
                    lastName = book[i].getLastName();
                    nickName = book[i].getNickName();
                    if (firstName.size() > 10) {
                        firstName.replace(9, firstName.size() - 9, ".");
                    }
                    if (lastName.size() > 10) {
                        lastName.replace(9, lastName.size() - 9, ".");
                    }
                    if (nickName.size() > 10) {
                        nickName.replace(9, nickName.size() - 9, ".");
                    }
                    std::cout << std::setw(10) 
                    << i + 1 << "|"
                    << std::setw(10) << firstName << "|"
                    << std::setw(10) << lastName << "|"
                    << std::setw(10) << nickName 
                    << std::endl;
                }
            }
            std::string view;
            std::cout << "Which entry would you like to view? ";
            std::cin >> view;
            try
            {
                int val = atoi(view.c_str());
                if (val >=1 && val <= 8)
                {
                    if (book[val - 1].getLogin().empty())
                    {
                        std::cout << "Entry is empty" << std::endl;
                    }
                    else book[val - 1].Show();
                }    
            }
            catch(const std::exception& e)
            {
                (void)e;
            }
            std::cout << "SEARCH DONE." << std::endl;
        }
        else if (val.compare("EXIT") == 0)
        {
            break;
        }
        else if (std::cin.fail())
        {
            std::cin.clear();
            break;
        }
        else
        {
            std::cout << "Please enter a valid command, ADD, SEARCH, EXIT" << std::endl;
        }
    }
    return 0;
}