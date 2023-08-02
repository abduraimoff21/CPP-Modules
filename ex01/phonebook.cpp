/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdurai <dabdurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 02:26:05 by dabdurai          #+#    #+#             */
/*   Updated: 2023/08/02 18:14:56 by dabdurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "contact.hpp"

Phonebook::Phonebook() : current_index(0){}
Phonebook::~Phonebook() {}

void Phonebook::displayTable() {
		std::cout << "_____________________________________________" << std::endl;
		std::cout << "|  INDEX  |FIRST NAME| LAST NAME | NICK NAME|" << std::endl;
		std::cout << "---------- ---------- ----------- -----------" << std::endl;
}

void Phonebook::storeContact(const Contact& contact) {
        contacts[current_index] = contact;
        current_index = (current_index + 1) % 8;
}

void Phonebook::printContact(int index){
	std::cout << YELLOW << "FIRST NAME: " << contacts[index].getFirstName() << std::endl;
	std::cout << YELLOW << "LAST NAME: " << contacts[index].getLastName() << std::endl;
	std::cout << YELLOW << "NICK NAME: " << contacts[index].getNickName() << std::endl;
	std::cout << YELLOW << "PHONE NUMBER: " << contacts[index].getPhoneNumber() << std::endl;
}