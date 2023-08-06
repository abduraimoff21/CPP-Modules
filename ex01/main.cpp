/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdurai <dabdurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 03:55:15 by dabdurai          #+#    #+#             */
/*   Updated: 2023/08/06 18:58:14 by dabdurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include "phonebook.hpp"

void printerror(){
	// if ((command != "SEARCH" && command != "ADD" && command != "EXIT") || (command == "")){
		std::cout << GREEN << "INVALID COMMAND. PLEASE ENTER THE VALID COMMAND" << std::endl;
		// std::cout << BLUE << "ENTER " << RED "ADD SEARCH EXIT" << BLUE << " COMMANDS IN CAPITAL LETTERS" << std::endl;
	// }
}

int main() {
	std::string command;
	Contact myContact;
	Phonebook myPhonebook;
	int index = 0;
	// bool showError = true;
	// std::cout << BLUE << "ENTER " << RED "ADD SEARCH EXIT" << BLUE << " COMMANDS IN CAPITAL LETTERS" << std::endl;
	while (1){
		std::cout << BLUE << "ENTER " << RED "ADD SEARCH EXIT" << BLUE << " COMMANDS IN CAPITAL LETTERS" << std::endl;
		if(!getline(std::cin, command))
			break;
		// if (showError) {
        // 	printerror();
        //     showError = false;
        // }
		if (command == "ADD")
			myPhonebook.storeContact(takeInformation(myContact));
		else if (command == "SEARCH"){
			myPhonebook.displayInform();
			myPhonebook.validIndex(index);
		}
		else if (command == "EXIT")
			exit (0);
		else
			printerror();
		// else
		// 	showError = true;
	}
	return 0;	
}