/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdurai <dabdurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 02:26:05 by dabdurai          #+#    #+#             */
/*   Updated: 2023/08/01 22:22:26 by dabdurai         ###   ########.fr       */
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

void Phonebook::displayContact() const {
	
	for (int i = 0; i < 9; i++){
		std::cout << RED << "|" << std::setw(10);
}
}
