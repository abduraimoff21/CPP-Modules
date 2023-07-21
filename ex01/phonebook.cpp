/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdurai <dabdurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 02:26:05 by dabdurai          #+#    #+#             */
/*   Updated: 2023/07/21 03:21:34 by dabdurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "contact.hpp"

int main () {
	std::string command;
	Contact myContact;
	
	std::cout << BLUE << "ENTER " << RED "ADD SEARCH EXIT" << BLUE << " COMMANDS IN CAPITAL LETTERS" << std::endl;
	while (getline(std::cin, command)){
		if (command == "ADD"){
			std::cout << MAGENTA << "PLEASE FILL THE ALL FIELDS" << std::endl;
			do {
				std::cout << YELLOW << "ENTER THE FIRST NAME" << std::endl;
				getline(std::cin, myContact.first_name);
			} while (myContact.first_name.empty());
			do {
				std::cout << YELLOW << "ENTER THE LAST NAME" << std::endl;
				getline(std::cin, myContact.last_name);
			} while (myContact.last_name.empty());
			do {
				std::cout << YELLOW << "ENTER THE NICK NAME" << std::endl;
				getline(std::cin, myContact.nick_name);
			} while (myContact.nick_name.empty());
			do {
				std::cout << YELLOW << "ENTER THE PHONE NUMBER" << std::endl;
				getline(std::cin, myContact.phone_number);
			} while (myContact.phone_number.empty());
			do {
				std::cout << YELLOW << "ENTER THE DARKEST SECRET" << std::endl;
				getline(std::cin, myContact.darkest_secret);
			} while (myContact.darkest_secret.empty());
		}
		else if (command == "SEARCH"){
			
		}
		else if (command == "EXIT"){
			
		}
		else
			std::cout << GREEN << "INVALID COMMAND. PLEASE ENTER THE VALID COMMAND" << std::endl;
	}
	return 0;
}