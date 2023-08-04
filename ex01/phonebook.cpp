/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdurai <dabdurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 02:26:05 by dabdurai          #+#    #+#             */
/*   Updated: 2023/08/04 22:46:58 by dabdurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "contact.hpp"

Phonebook::Phonebook() : numContacts(0), current_index(0){}
Phonebook::~Phonebook() {}

void Phonebook::displayTable() {
		std::cout << "_____________________________________________" << std::endl;
		std::cout << "|  INDEX   |FIRST NAME|LAST NAME | NICK NAME|" << std::endl;
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
	std::cout << std::right << "|" << std::setw(10) << index + 1 << "|";
	std::cout << std::right << std::setw(10) << cutInfo(contacts[index].getFirstName()) << "|";
	std::cout << std::right << std::setw(10) << cutInfo(contacts[index].getNickName()) << "|";
	std::cout << std::right << std::setw(10) << cutInfo(contacts[index].getLastName()) << "|" << std::endl;
	std::cout << "|__________|__________|__________|__________|" << std::endl;
}

std::string Phonebook::cutInfo(std::string temp){
	if (temp.length() > 10){
		temp.resize(9);
		temp.append(".");
	}
	return (temp);
}

void Phonebook::printContacts() {
	for (int i = 0; i < numContacts; ++i)
		printContact(i);
}

void Phonebook::print(int index){
	std::cout << YELLOW << contacts[index - 1].getFirstName() << std::endl;
	std::cout << YELLOW << contacts[index - 1].getLastName() << std::endl;
	std::cout << YELLOW << contacts[index - 1].getNickName() << std::endl;
	std::cout << YELLOW << contacts[index - 1].getPhoneNumber() << std::endl;
	return ;
}