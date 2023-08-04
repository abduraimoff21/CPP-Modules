/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdurai <dabdurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 02:26:05 by dabdurai          #+#    #+#             */
/*   Updated: 2023/08/03 23:24:36 by dabdurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "contact.hpp"

Phonebook::Phonebook() {}
Phonebook::~Phonebook() {}

void Phonebook::displayTable() {
		std::cout << "_____________________________________________" << std::endl;
		std::cout << "|  INDEX  |FIRST NAME| LAST NAME | NICK NAME|" << std::endl;
		std::cout << "---------- ---------- ----------- -----------" << std::endl;
}

// void Phonebook::storeContact(const Contact& contact) {
// 	if (numContacts < 8){
// 		contacts[numContacts] = contact;
// 		numContacts++;
// 	}
// 	else{
//     	contacts[current_index] = contact;
//     	current_index = (current_index + 1) % 8;
// 	}
// }

void Phonebook::printContact(int index, Contact *contact){
	std::cout << YELLOW << "INDEX: " << contact[index].getFirstName() << std::endl;
	std::cout << YELLOW << "LAST NAME: " << contact[index].getLastName() << std::endl;
	std::cout << YELLOW << "NICK NAME: " << contact[index].getNickName() << std::endl;
	std::cout << YELLOW << "PHONE NUMBER: " << contact[index].getPhoneNumber() << std::endl;
}

