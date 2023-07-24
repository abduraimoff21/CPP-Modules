/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdurai <dabdurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 02:26:16 by dabdurai          #+#    #+#             */
/*   Updated: 2023/07/24 04:34:02 by dabdurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONENOOK_HPP
# define PHONENOOK_HPP

# include <iostream>
# include <string>
# include <iomanip>

class Phonebook {
	public:
		Phonebook() : numContacts(0) {}
		void checkContact() {
			if (numContacts < maxContacts){
				numContacts++;
			}
		}
	private:
		static const int maxContacts = 8;
		int numContacts;
		Contact contacts[maxContacts];
};
void table();

#endif