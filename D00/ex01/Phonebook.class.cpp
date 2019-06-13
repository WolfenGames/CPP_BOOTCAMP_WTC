/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <jwolf@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 20:10:14 by jwolf             #+#    #+#             */
/*   Updated: 2019/06/03 20:10:14 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Phonebook.class.hpp"

Phonebook::Phonebook (void) {}

Phonebook::~Phonebook (void) {}

std::string Phonebook::getFirstName (void) const
{
    return this->firstName;
}

void        Phonebook::setFirstName(std::string firstName)
{
    this->firstName = firstName;
}

std::string Phonebook::getLastName (void) const
{
    return this->lastName;
}

void        Phonebook::setLastName (std::string lastName)
{
    this->lastName = lastName;
}

std::string Phonebook::getNickName (void) const
{
    return this->nickName;
}

void        Phonebook::setNickName (std::string nickName)
{
    this->nickName = nickName;
}

std::string Phonebook::getLogin (void) const
{
    return this->login;
}

void        Phonebook::setLogin (std::string login)
{
    this->login = login;
}

std::string Phonebook::getPostalCode (void) const
{
    return this->postalCode;
}

void        Phonebook::setPostalCode (std::string postalCode)
{
    this->postalCode = postalCode;
}

std::string Phonebook::getEmail (void) const
{
    return this->email;
}

void        Phonebook::setEmail (std::string email)
{
    this->email = email;
}

std::string Phonebook::getPhonenumber (void) const
{
    return this->phonenumber;
}

void        Phonebook::setPhonenumber(std::string phoneNumber)
{
    this->phonenumber = phoneNumber;
}

std::string Phonebook::getBirthday (void) const
{
    return this->birthdate;
}

void        Phonebook::setBirthday (std::string birthdate)
{
    this->birthdate = birthdate;
}

std::string Phonebook::getFavoriteMeal (void) const
{
    return this->favoriteMeal;
}

void        Phonebook::setFavoriteMeal (std::string favoriteMeal)
{
    this->favoriteMeal = favoriteMeal;
}

std::string Phonebook::getUnderwearColor (void) const
{
    return this->underwearColor;
}

void        Phonebook::setUnderwearColor (std::string underwearColor)
{
    this->underwearColor = underwearColor;
}

std::string Phonebook::getDarkSecret (void) const
{
    return this->darkSecret;
}

void        Phonebook::setDarkSecret (std::string darkSecret)
{
    this->darkSecret = darkSecret;
}

void        Phonebook::Show (void)
{
    if (!this->getFirstName().empty())
        std::cout << "Firstname         : " << this->getFirstName() << std::endl;
    else
        std::cout << "Firstname         : {NULL}" << std::endl;
    
    if (!this->getLastName().empty())
        std::cout << "Lastname          : " << this->getLastName() << std::endl;
    else
        std::cout << "Lastname          : {NULL}" << std::endl;

    if (!this->getLogin().empty())
        std::cout << "Login             : " << this->getLogin() << std::endl;
    else
        std::cout << "Login             : {NULL}" << std::endl;

    if (!this->getNickName().empty())
        std::cout << "Nickname          : " << this->getNickName() << std::endl;
    else
        std::cout << "Nickname          : {NULL}" << std::endl;

    if (!this->getPostalCode().empty())
        std::cout << "PostalCode        : " << this->getPostalCode() << std::endl;
    else
        std::cout << "PostalCode        : {NULL}" << std::endl;

    if (!this->getEmail().empty())
        std::cout << "Email             : " << this->getEmail() << std::endl;
    else
        std::cout << "Email             : {NULL}" << std::endl;

    if (!this->getPhonenumber().empty())
        std::cout << "Phonenumber       : " << this->getPhonenumber() << std::endl;
    else
        std::cout << "Phonenumber       : {NULL}" << std::endl;

    if (!this->getBirthday().empty())
        std::cout << "Birthdate         : " << this->getBirthday() << std::endl;
    else
        std::cout << "Birthdate         : {NULL}" << std::endl;

    if (!this->getFavoriteMeal().empty())
        std::cout << "Favourite Meal    : " << this->getFavoriteMeal() << std::endl;
    else
        std::cout << "Favourite Meal    : {NULL}" << std::endl;

    if (!this->getUnderwearColor().empty())
        std::cout << "Underwear Color   : " << this->getUnderwearColor() << std::endl;
    else
        std::cout << "Underwear Color   : {NULL}" << std::endl;

    if (!this->getDarkSecret().empty())
        std::cout << "Darkest Secret... : " << this->getDarkSecret() << std::endl;
    else
        std::cout << "Darkest Secret... : {NULL}" << std::endl;
}
