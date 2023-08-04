/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdurai <dabdurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 03:55:15 by dabdurai          #+#    #+#             */
/*   Updated: 2023/08/04 20:17:00 by dabdurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include "phonebook.hpp"

int main() {
	std::string command;
	std::string temp;
	Contact myContact;
	Contact myContac;
	Phonebook myPhonebook;
	int index;
	std::cout << BLUE << "ENTER " << RED "ADD SEARCH EXIT" << BLUE << " COMMANDS IN CAPITAL LETTERS" << std::endl;

	while (getline(std::cin, command)){
		if (command == "ADD"){
			myContac = takeInformation(myContact);
			myPhonebook.storeContact(myContac);
		}
		else if (command == "SEARCH"){
			myPhonebook.displayTable();
			myPhonebook.printContacts();
			std::cout << GREEN << "PLEASE ENTER THE CONTACT INDEX > ";
			std::cin >> index;
			myPhonebook.printContact(index);
			// std::cout << GREEN << "YOU ENTERED WRONG INDEX. PLEASE ENTER BETWEEN 1 AND 8" << std::endl;
			
				
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