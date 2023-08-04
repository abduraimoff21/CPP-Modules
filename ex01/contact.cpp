/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdurai <dabdurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 01:15:48 by dabdurai          #+#    #+#             */
/*   Updated: 2023/08/04 22:47:17 by dabdurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include "phonebook.hpp"

Contact::Contact() {}
Contact::~Contact() {}

int Contact::count = 0;

void Contact::setFirstName(const std::string& first_name){
	this->first_name = first_name;
}

void Contact::setLastName(const std::string& last_name){
	this->last_name = last_name;
}

void Contact::setNickname(const std::string& nick_name){
	this->nick_name = nick_name;
}

void Contact::setPhoneNumber(const std::string& phone_number){
	this->phone_number = phone_number;
}

void Contact::setDarkestsecret(const std::string& darkest_secret){
	this->darkest_secret = darkest_secret;
}

std::string Contact::getFirstName() const {
	return first_name;
}

std::string Contact::getLastName() const {
	return last_name;
}

std::string Contact::getNickName() const {
	return nick_name;
}

std::string Contact::getPhoneNumber() const {
	return phone_number;
}

std::string Contact::getDarkestSecret() const {
	return darkest_secret;
}

int Contact::getCount(){
	return count;
}

const std::string get_info(std::string output, std::string temp)
{
	std::cout << MAGENTA << "PLEASE FILL THE ALL FIELDS" << std::endl;
	while(1)
	{
		std::cout << YELLOW << output << ": ";
		if (!getline(std::cin, temp))
			exit (0);
		if (temp != "")
			break;
	}
	return (temp);
}
Contact takeInformation(Contact contact)
{
	std::string line;

	contact.setFirstName(get_info("ENTER THE FIRST NAME", line));
	contact.setLastName(get_info("ENTER THE LAST NAME", line));
	contact.setNickname(get_info("ENTER THE NICK NAME", line));
	contact.setPhoneNumber(get_info("ENTER THE PHONE NUMBER", line));
	contact.setDarkestsecret(get_info("ENTER THE DARKEST SECRET", line));
	std::cout << BLUE << "ENTER " << RED "ADD SEARCH EXIT" << BLUE << " COMMANDS IN CAPITAL LETTERS" << std::endl;
	return (contact);
}
