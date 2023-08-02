/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdurai <dabdurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 03:55:15 by dabdurai          #+#    #+#             */
/*   Updated: 2023/08/02 18:20:17 by dabdurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include "phonebook.hpp"

int main() {
	std::string command;
	Contact myContact;
	Phonebook myPhonebook;
	int index = Contact::getCount();
	// int count;
	
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
			if (index > 8)
				myPhonebook.storeContact(myContact);
			index++;
		}
		else if (command == "SEARCH"){
			std::cout << BLUE << "PLEASE ENTER CONTACT INDEX NUMBER" << std::endl;
			myPhonebook.displayTable();
			std::cin >> index;
			if (index >= 1 && index <= 8){
				myPhonebook.printContact(index);	
			}
			else
				std::cout << GREEN << "YOU ENTERED WRONG INDEX. PLEASE ENTER BETWEEN 1 AND 8" << std::endl;
			
				
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