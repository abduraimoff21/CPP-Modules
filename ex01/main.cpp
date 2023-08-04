/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdurai <dabdurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 03:55:15 by dabdurai          #+#    #+#             */
/*   Updated: 2023/08/03 23:27:17 by dabdurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include "phonebook.hpp"

int main() {
	std::string command;
	std::string temp;
	Contact myContact;
	Phonebook myPhonebook;
	int index;
	std::cout << BLUE << "ENTER " << RED "ADD SEARCH EXIT" << BLUE << " COMMANDS IN CAPITAL LETTERS" << std::endl;

	while (getline(std::cin, command)){
		if (command == "ADD"){
				myContact.takeInformation(myContact);
		}
		else if (command == "SEARCH"){
			myPhonebook.displayTable();
			std::cout << BLUE << "PLEASE ENTER CONTACT INDEX NUMBER" << std::endl;
			std::cin >> index;
			// myPhonebook.printContact(index, myContact);	
			std::cout << myContact.getFirstName();
			// else
			// 	std::cout << GREEN << "YOU ENTERED WRONG INDEX. PLEASE ENTER BETWEEN 1 AND 8" << std::endl;
			
				
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