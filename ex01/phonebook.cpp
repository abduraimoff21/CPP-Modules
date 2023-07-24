/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdurai <dabdurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 02:26:05 by dabdurai          #+#    #+#             */
/*   Updated: 2023/07/24 12:39:38 by dabdurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "contact.hpp"

void Phonebook::displayContacts() {
		std::cout << "______________________________________________" << std::endl;
		std::cout << "| INDEX | FIRST NAME | LAST NAME | NICK NAME |" << std::endl;
		std::cout << "----------------------------------------------" << std::endl;
}

Phonebook::Phonebook() : numContacts(0) {}

void Phonebook::storeContacts(const Contact& myContact) {
	if (numContacts <= 8) {
		contacts[numContacts] = myContact;
		numContacts++;
	}
	else {
		
	}
}
