/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdurai <dabdurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 02:26:16 by dabdurai          #+#    #+#             */
/*   Updated: 2023/08/04 19:02:16 by dabdurai         ###   ########.fr       */
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
		
		void displayTable();
		void storeContact(const Contact& contact);
		void printContact(int index);
		void printContacts();
		
		Contact contacts[8];
	private:
		int numContacts;
		int current_index;
};

#endif