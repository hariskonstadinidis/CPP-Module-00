/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkonstan <hkonstan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 20:02:00 by hkonstan          #+#    #+#             */
/*   Updated: 2026/08/07 19:41:07 by hkonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main(){
	phonebook my_phonebook;
	std::string command;
	contacts temp;
	int i = 0;
	
	while (1){
		std::cout<<"Please write one of the following instuctions: ADD, SEARCH, EXIT"<<std::endl;
		
		std::getline(std::cin, command);
		if (command == "ADD"){
			temp.addName();
			temp.addLastName();
			temp.addNickName();
			temp.addNumber();
			temp.addSecret();
			my_phonebook.addContact(i, temp);
			i++;
			if (i == 8)
				i = 0;
		}
		else if  (command == "SEARCH"){
			my_phonebook.search();
		}
		else if (command == "EXIT"){
			std::cout<<"Phonebook was aborted, bye bye!"<<std::endl;
			break;
		}
	}
}
