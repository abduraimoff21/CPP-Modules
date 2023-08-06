/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdurai <dabdurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 02:26:16 by dabdurai          #+#    #+#             */
/*   Updated: 2023/08/06 18:28:31 by dabdurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONENOOK_HPP
# define PHONENOOK_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include "contact.hpp"

class Phonebook {
	public:
		Phonebook();
		~Phonebook();
		
		void displayInform();
		void storeContact(const Contact& contact);
		void printContact(int index);
		void print(int index);
		void validIndex(int index);
		std::string cutInfo(std::string temp);
		
	private:
		Contact contacts[8];
		int numContacts;
		int current_index;
};
// int getIntegerLength(int number);

#endif