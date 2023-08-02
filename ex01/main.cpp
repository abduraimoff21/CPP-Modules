/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdurai <dabdurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 03:55:15 by dabdurai          #+#    #+#             */
/*   Updated: 2023/08/02 10:21:33 by dabdurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include "phonebook.hpp"

int main() {
	std::string command;
	Contact myContact;
	Phonebook myPhonebook;
	int index = Contact::getCount();
	
	std::cout << BLUE << "ENTER " << RED "ADD SEARCH EXIT" << BLUE << " COMMANDS IN CAPITAL LETTERS" << std::endl;
	while (getline(std::cin, command)){
		if (command == "ADD"){
			std::string temp;
			std::cout << MAGENTA << "PLEASE FILL THE ALL FIELDS" << std::endl;
			do {
				std::cout << YELLOW << "ENTER THE FIRST NAME" << std::endl;
				if (!getline(std::cin, temp))
					exit (0);
				myContact.setFirstName(temp);
			} while (temp.empty());
			do {
				std::cout << YELLOW << "ENTER THE LAST NAME" << std::endl;
				if (!getline(std::cin, temp))
					exit (0);
				myContact.setLastName(temp);
			} while (temp.empty());
			do {
				std::cout << YELLOW << "ENTER THE NICK NAME" << std::endl;
				if (!getline(std::cin, temp))
					exit (0);
				myContact.setNickname(temp);
			} while (temp.empty());
			do {
				std::cout << YELLOW << "ENTER THE PHONE NUMBER" << std::endl;
				if (!getline(std::cin, temp))
					exit (0);
				myContact.setPhoneNumber(temp);
			} while (temp.empty());
			do {
				std::cout << YELLOW << "ENTER THE DARKEST SECRET" << std::endl;
				if (!getline(std::cin, temp))
					exit (0);
				myContact.setDarkestsecret(temp);
			} while (temp.empty());
			std::cout << BLUE << "ENTER " << RED "ADD SEARCH EXIT" << BLUE << " COMMANDS IN CAPITAL LETTERS" << std::endl;
			if (index <= 8)
				index++;
			else
				myPhonebook.storeContact(myContact);
		}
		else if (command == "SEARCH"){
			std::cout << BLUE << "PLEASE ENTER CONTACT INDEX NUMBER" << std::endl;
			myPhonebook.displayTable();
			std::cout << index << std::endl;
			std::cout << myContact.getFirstName() << std::endl;
			
				
		}
		else if (command == "EXIT"){
			exit (0);
		}
		else {
		std::cout << GREEN << "INVALID COMMAND. PLEASE ENTER THE VALID COMMAND" << std::endl;
		std::cout << BLUE << "ENTER " << RED "ADD SEARCH EXIT" << BLUE << " COMMANDS IN CAPITAL LETTERS" << std::endl;
			
		}
	}
	return 0;	
}