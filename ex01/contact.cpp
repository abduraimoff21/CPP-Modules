/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdurai <dabdurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 01:15:48 by dabdurai          #+#    #+#             */
/*   Updated: 2023/08/01 22:49:41 by dabdurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include "phonebook.hpp"

Contact::Contact() {}

Contact::~Contact() {}

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

int Contact::count = 0;

void Contact::takeInformations() {
	std::string temp;
	std::cout << MAGENTA << "PLEASE FILL THE ALL FIELDS" << std::endl;
	do {
		std::cout << YELLOW << "ENTER THE FIRST NAME" << std::endl;
		if (!getline(std::cin, temp))
			exit (0);
		setFirstName(temp);
	} while (first_name.empty());
	do {
		std::cout << YELLOW << "ENTER THE LAST NAME" << std::endl;
		if (!getline(std::cin, temp))
			exit (0);
		setLastName(temp);
	} while (last_name.empty());
	do {
		std::cout << YELLOW << "ENTER THE NICK NAME" << std::endl;
		if (!getline(std::cin, temp))
			exit (0);
		setNickname(temp);
	} while (nick_name.empty());
	do {
		std::cout << YELLOW << "ENTER THE PHONE NUMBER" << std::endl;
		if (!getline(std::cin, temp))
			exit (0);
		setPhoneNumber(temp);
	} while (phone_number.empty());
	do {
		std::cout << YELLOW << "ENTER THE DARKEST SECRET" << std::endl;
		if (!getline(std::cin, temp))
			exit (0);
		setDarkestsecret(temp);
	} while (darkest_secret.empty());
	std::cout << BLUE << "ENTER " << RED "ADD SEARCH EXIT" << BLUE << " COMMANDS IN CAPITAL LETTERS" << std::endl;
	count++;
}