/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <jwolf@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 19:58:56 by jwolf             #+#    #+#             */
/*   Updated: 2019/06/03 19:58:56 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

#include <string>

class Phonebook {
    public:
        Phonebook(void);
        ~Phonebook(void);

        std::string getFirstName(void) const;
        void        setFirstName(std::string firstName);
        
        std::string getLastName(void) const;
        void        setLastName(std::string lastName);
        
        std::string getNickName(void) const;
        void        setNickName(std::string nickName);
        
		std::string	getLogin(void) const;
		void		setLogin(std::string login);

        std::string getPostalCode(void) const;
        void        setPostalCode(std::string postalCode);
        
        std::string getEmail(void) const;
        void        setEmail(std::string email);

        std::string getPhonenumber(void) const;
        void        setPhonenumber(std::string phoneNumber);
        
        std::string getBirthday(void) const;
        void        setBirthday(std::string birthday);

        std::string getFavoriteMeal(void) const;
        void        setFavoriteMeal(std::string favoriteMeal);
        
        std::string getUnderwearColor(void) const;
        void        setUnderwearColor(std::string underwearColor);

		std::string	getDarkSecret(void) const;
		void		setDarkSecret(std::string darkSecret);

        void        Show(void);

	private:
		std::string	firstName;
		std::string lastName;
		std::string	nickName;
		std::string login;
		std::string postalCode;
		std::string email;
		std::string phonenumber;
		std::string	birthdate;
		std::string favoriteMeal;
		std::string	underwearColor;
		std::string darkSecret;
};

#endif