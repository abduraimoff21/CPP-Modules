/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdurai <dabdurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 02:26:05 by dabdurai          #+#    #+#             */
/*   Updated: 2023/08/01 20:18:27 by dabdurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "contact.hpp"

Phonebook::Phonebook() {
	std::cout << "Constructor called" << std::endl;
	return;
}
Phonebook::~Phonebook() {
	std::cout << "Destructor called" << std::endl;
	return;
}

void Phonebook::displayContacts() {
		std::cout << "_____________________________________________" << std::endl;
		std::cout << "   INDEX  |FIRST NAME| LAST NAME | NICK NAME|" << std::endl;
		std::cout << "---------- ---------- ----------- -----------" << std::endl;
		
}
