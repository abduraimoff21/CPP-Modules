/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdurai <dabdurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 02:26:05 by dabdurai          #+#    #+#             */
/*   Updated: 2023/07/25 09:03:46 by dabdurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "contact.hpp"

void Phonebook::displayContacts() {
		std::cout << "_____________________________________________" << std::endl;
		std::cout << "   INDEX  | FIRST NAME| LAST NAME| NICK NAME|" << std::endl;
		std::cout << "---------- ---------- -----------------------" << std::endl;
		
}

Phonebook::Phonebook() : numContacts(0) {}

void Phonebook::storeContacts(const Contact& myContact) {
	if (numContacts <= 8) {
		contacts[numContacts] = myContact;
		numContacts++;
	}
	else {
		for (int i = 0; i < 7; i++){
			contacts[i] = contacts[i + 1];
		}
	}
}

void Phonebook::printContacts(int index) {
	if (index >= 0 && index < numContacts)
		contacts[index].displayContact();
	else
		std::cout << GREEN << "INVALID INDEX. NO CONTACT FOUND AT INDEX " << index << "." << std::endl;
}