/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdurai <dabdurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 02:26:05 by dabdurai          #+#    #+#             */
/*   Updated: 2023/08/06 20:14:50 by dabdurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "contact.hpp"

Phonebook::Phonebook() : numContacts(0), current_index(0){}
Phonebook::~Phonebook() {}

void Phonebook::displayInform() {
	if (numContacts == 0)
		std::cout << GREEN << "THERE IS NOT ANY SAVED CONTACTS" << std::endl; 
	std::cout << "_____________________________________________" << std::endl;
	std::cout << "|  INDEX   |FIRST NAME|LAST NAME | NICK NAME|" << std::endl;
	std::cout << "---------- ---------- ----------- -----------" << std::endl;
	for (int i = 0; i < numContacts; ++i)
		printContact(i);
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
void Phonebook::validIndex(int index){
	std::string number;
	int temp;
	
	std::cout << GREEN << "PLEASE ENTER THE CONTACT INDEX > ";
	while (getline(std::cin, number)){
		temp = number.length();
		if (temp == 1)
			index = atoi(number.c_str());
		if (index == 0)
			index = 9;
		if (index <= numContacts && index < 8 && temp == 1)
		{
			print(index);
			break;
		}
		else
		{
			std::cout << GREEN << "PLEASE ENTER THE CONTACT INDEX > ";
		}
	}
}
void Phonebook::print(int index){
	std::cout << YELLOW << "FIRST NAME: "<< BLUE << contacts[index - 1].getFirstName() << std::endl;
	std::cout << YELLOW << "LAST NAME: " << BLUE << contacts[index - 1].getLastName() << std::endl;
	std::cout << YELLOW << "NICK NAME: " << BLUE << contacts[index - 1].getNickName() << std::endl;
	std::cout << YELLOW << "PHONE NUMBER: " << BLUE << contacts[index - 1].getPhoneNumber() << std::endl;
	return ;
}