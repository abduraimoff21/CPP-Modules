/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdurai <dabdurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 01:15:59 by dabdurai          #+#    #+#             */
/*   Updated: 2023/08/03 23:29:29 by dabdurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include <cstdlib>

# define RED		"\033[31m"
# define GREEN 		"\033[32m"
# define YELLOW		"\033[33m"
# define BLUE		"\033[34m"
# define MAGENTA	"\033[35m"
# define WHITE		"\033[37m"

class Contact {
	public:
		Contact();
		~Contact();
		
		void takeInformation(Contact contact);
		
		// Setters
		void setFirstName(const std::string& first_name);
		void setLastName(const std::string& last_name);
    	void setNickname(const std::string& nick_name);
    	void setPhoneNumber(const std::string& phone_number);
    	void setDarkestsecret(const std::string& darkest_secret);

		// Getters
		std::string getFirstName() const;
		std::string getLastName() const;
		std::string getNickName() const;
		std::string getPhoneNumber() const;
		std::string getDarkestSecret() const;
		static int getCount();
		static int count;
		
	private:
		std::string first_name;
		std::string last_name;
		std::string nick_name;
		std::string darkest_secret;
		std::string phone_number;
		// int numContacts;
		int current_index;

};
		std::string get_info(std::string output, std::string temp);

#endif