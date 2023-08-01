/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdurai <dabdurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 01:15:48 by dabdurai          #+#    #+#             */
/*   Updated: 2023/08/01 15:52:58 by dabdurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include "phonebook.hpp"

Contact::Contact() {
	std::cout << "Constructor called" << std::endl;
	return;
}
Contact::~Contact() {
	std::cout << "Destructor called" << std::endl;
	return;
}
void Contact::takeInformations() {
	std::cout << MAGENTA << "PLEASE FILL THE ALL FIELDS" << std::endl;
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