/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdurai <dabdurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 02:26:05 by dabdurai          #+#    #+#             */
/*   Updated: 2023/08/04 20:16:13 by dabdurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "contact.hpp"

Phonebook::Phonebook() : numContacts(0), current_index(0){}
Phonebook::~Phonebook() {}

void Phonebook::displayTable() {
		std::cout << "_____________________________________________" << std::endl;
		std::cout << "|  INDEX  |FIRST NAME| LAST NAME | NICK NAME|" << std::endl;
		std::cout << "---------- ---------- ----------- -----------" << std::endl;
}

void Phonebook::storeContact(const Contact& contact) {
	if (numContacts < 8){
		contacts[numContacts] = contact;
		numContacts++;
	}
	else{
    	contacts[current_index] = contact;
    	current_index = (current_index + 1) % 8;
	}
}

void Phonebook::printContact(int index){
	index = 0;
	std::cout << std::right << "|" << std::setw(10) << index + 1 << "|";
	std::cout << std::right << std::setw(10) << contacts[index].getFirstName() << "|";
	std::cout << std::right << std::setw(10) << contacts[index].getNickName() << "|";
	std::cout << std::right << std::setw(10) << contacts[index].getLastName() << "|" << std::endl;
	std::cout << "|__________|__________|__________|__________|" << std::endl;
}

void Phonebook::printContacts() {
	for (int i = 0; i < numContacts; ++i)
		printContact(i);
}
