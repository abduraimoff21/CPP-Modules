/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdurai <dabdurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 02:24:42 by dabdurai          #+#    #+#             */
/*   Updated: 2023/07/18 05:04:31 by dabdurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main (int argc, char **argv){
	int i;
	int j;
	char c;
	if (argc > 1)
	{
		for (i = 1; argv[i]; i++)
		{
			for (j = 0; argv[i][j]; j++)
			{
				c = std::toupper(argv[i][j]);	
				std::cout << c;
			}
		}
		std::cout << "\n";
	}
	else
		std::cout << "*  LOUD AND UNBEARABLE FEEDBACK NOISE  * \n";
	return 0;
}