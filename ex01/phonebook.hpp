/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdurai <dabdurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 02:26:16 by dabdurai          #+#    #+#             */
/*   Updated: 2023/07/19 08:01:40 by dabdurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Phonebook {
	public:
		int contact;
};

class Contact {
	public:
		int index;
		std::string fname;
		std::string lname;
		std::string nname;
};
