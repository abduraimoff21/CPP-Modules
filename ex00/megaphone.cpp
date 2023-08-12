/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdurai <dabdurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 02:24:42 by dabdurai          #+#    #+#             */
/*   Updated: 2023/08/12 19:17:16 by dabdurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main (int argc, char **argv){
	int i;
	char c;
	if (argc > 1)
	{
		for(int i = 1; argv[i]; i++){
			std::string str = argv[i];
			for (std::string::size_type j = 0; j < str.length(); ++j)
			{
				c = std::toupper(str[j]);	
				std::cout << c;
			}
		}
		std::cout << "\n";
	}
	else
		std::cout << "*  LOUD AND UNBEARABLE FEEDBACK NOISE  * \n";
	return 0;
}