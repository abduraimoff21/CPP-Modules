/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdurai <dabdurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 01:15:59 by dabdurai          #+#    #+#             */
/*   Updated: 2023/07/31 21:31:13 by dabdurai         ###   ########.fr       */
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
			void takeInformations();
			void displayContact();
	private:
		std::string first_name;
		std::string last_name;
		std::string nick_name;
		std::string darkest_secret;
		
		std::string phone_number;
		void setContactInfo(const std::string& first_name, const std::string& last_name, 
			const std::string& nick_name, const std::string& darkest_secret, 
			const std::string& phone_number);
};

#endif