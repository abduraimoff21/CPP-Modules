/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdurai <dabdurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 02:26:05 by dabdurai          #+#    #+#             */
/*   Updated: 2023/08/06 18:50:34 by dabdurai         ###   ########.fr       */
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
		// if (number == "")
		// 	std::cout << GREEN << "PLEASE ENTER THE CONTACT INDEX > ";	
		temp = number.length();
		index = atoi(number.c_str());
		if (index <= numContacts && index < 8 && temp == 1)
		{
			print(index);
			break;
		}
		else
		{
			// std::cout << GREEN << "YOU ENTERED WRONG INDEX OR CONTACT NOT FOUND AT INDEX. PLEASE ENTER BETWEEN 1 AND 8" << std::endl;
			std::cout << GREEN << "PLEASE ENTER THE CONTACT INDEX > ";
			// break;
		}
	}
}
void Phonebook::print(int index){
	std::cout << YELLOW << "FIRST NAME: "<< BLUE << contacts[index - 1].getFirstName() << std::endl;
	std::cout << YELLOW << "LAST NAME: " << BLUE << contacts[index - 1].getLastName() << std::endl;
	std::cout << YELLOW << "NICK NAME: " << BLUE << contacts[index - 1].getNickName() << std::endl;
	std::cout << YELLOW << "PHONE NUMBER: " << BLUE << contacts[index - 1].getPhoneNumber() << std::endl;
	// std::cout << BLUE << "ENTER " << RED "ADD SEARCH EXIT" << BLUE << " COMMANDS IN CAPITAL LETTERS" << std::endl;
	return ;
}
// int getIntegerLength(int number) {
//     int length = 0;

//     if (number < 0) {
//         length++;
//         number = -number; 
// 	}
//     do {
//         number /= 10;
//         length++;
//     } while (number != 0);

//     return length;
// }