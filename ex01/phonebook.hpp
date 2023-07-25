/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdurai <dabdurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 02:26:16 by dabdurai          #+#    #+#             */
/*   Updated: 2023/07/25 08:38:51 by dabdurai         ###   ########.fr       */
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
		void displayContacts();
		void printContacts(int index);
	private:
		int numContacts;
		Contact contacts[8];
		void storeContacts(const Contact& myContact);
};

#endif