/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdurai <dabdurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 01:15:48 by dabdurai          #+#    #+#             */
/*   Updated: 2023/07/25 16:04:09 by dabdurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include "phonebook.hpp"

Contact::Contact(){
				setContactInfo(first_name, last_name, nick_name,phone_number, darkest_secret);
			}
void Contact::setContactInfo(const std::string& first_name, const std::string& last_name, \
			const std::string& nick_name, const std::string& darkest_secret, \
			const std::string& phone_number){
				this->first_name = first_name;
				this->last_name = last_name;
				this->nick_name = nick_name;
				this->phone_number = phone_number;
				this->darkest_secret = darkest_secret;
			}
void Contact::takeInformations() {
	std::cout << MAGENTA << "PLEASE FILL THE ALL FIELDS" << std::endl;
		for (int i = 0; i < 8; i++)
			{
				do {
					std::cout << YELLOW << "ENTER THE FIRST NAME" << std::endl;
					if (!getline(std::cin, first_name))
						exit (0);
				} while (first_name.empty());
				do {
					std::cout << YELLOW << "ENTER THE LAST NAME" << std::endl;
					if (!getline(std::cin, last_name))
						exit (0);
				} while (last_name.empty());
				do {
					std::cout << YELLOW << "ENTER THE NICK NAME" << std::endl;
					if (!getline(std::cin, nick_name))
						exit (0);
				} while (nick_name.empty());
				do {
					std::cout << YELLOW << "ENTER THE PHONE NUMBER" << std::endl;
					if (!getline(std::cin, phone_number))
						exit (0);
				} while (phone_number.empty());
				do {
					std::cout << YELLOW << "ENTER THE DARKEST SECRET" << std::endl;
					if (!getline(std::cin, darkest_secret))
						exit (0);
				} while (darkest_secret.empty());
				std::cout << BLUE << "ENTER " << RED "ADD SEARCH EXIT" << BLUE << " COMMANDS IN CAPITAL LETTERS" << std::endl;
			}
}

void Contact::displayContact() {
	std::cout << std::setw(10) << first_name << std::endl;
	std::cout << std::setw(10) << last_name << std::endl;
	std::cout << std::setw(10) << nick_name << std::endl;
}