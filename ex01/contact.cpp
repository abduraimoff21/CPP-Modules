/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdurai <dabdurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 01:15:48 by dabdurai          #+#    #+#             */
/*   Updated: 2023/07/23 04:43:32 by dabdurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

void contacts(Contact &myContact) {
			std::cout << MAGENTA << "PLEASE FILL THE ALL FIELDS" << std::endl;
			do {
				std::cout << YELLOW << "ENTER THE FIRST NAME" << std::endl;
				if (!getline(std::cin, myContact.first_name))
					exit (0);
			} while (myContact.first_name.empty());
			do {
				std::cout << YELLOW << "ENTER THE LAST NAME" << std::endl;
				if (!getline(std::cin, myContact.last_name))
					exit (0);
			} while (myContact.last_name.empty());
			do {
				std::cout << YELLOW << "ENTER THE NICK NAME" << std::endl;
				if (!getline(std::cin, myContact.nick_name))
					exit (0);
			} while (myContact.nick_name.empty());
			do {
				std::cout << YELLOW << "ENTER THE PHONE NUMBER" << std::endl;
				if (!getline(std::cin, myContact.phone_number))
					exit (0);
			} while (myContact.phone_number.empty());
			do {
				std::cout << YELLOW << "ENTER THE DARKEST SECRET" << std::endl;
				if (!getline(std::cin, myContact.darkest_secret))
					exit (0);
			} while (myContact.darkest_secret.empty());
			std::cout << BLUE << "ENTER " << RED "ADD SEARCH EXIT" << BLUE << " COMMANDS IN CAPITAL LETTERS" << std::endl;
}