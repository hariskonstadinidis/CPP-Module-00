/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hariskon <hariskon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 20:02:00 by hkonstan          #+#    #+#             */
/*   Updated: 2026/08/08 22:13:17 by hariskon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main(){
	phonebook my_phonebook;
	std::string command;
	contacts temp;
	int i = 0;
	
	std::cout<<"Please write one of the following instuctions: ADD, SEARCH, EXIT"<<std::endl;
	while (std::getline(std::cin, command)){
		if (command == "ADD"){
			temp.addName();
			temp.addLastName();
			temp.addNickName();
			temp.addNumber();
			temp.addSecret();
			my_phonebook.addContact(i, temp);
			i++;
			if (i == 1)
				i = 0;
		}
		else if  (command == "SEARCH"){
			my_phonebook.search();
			std::cout<<"Please choose one of the contacts from the phonebook."<<std::endl;
			std::getline(std::cin, command);
			while(!(command.length() == 1 &&  (command[0] >= '0' && command[0] < my_phonebook.length() + 48)))
			{
				my_phonebook.search();
				std::cout<<"Please choose a valid index number from the existing contacts."<<std::endl;
				std::getline(std::cin, command);
			}
			my_phonebook.show_contact(command);
		}
		else if (command == "EXIT"){
			std::cout<<"Phonebook was aborted, bye bye!"<<std::endl;
			break;
		}
		std::cout<<"Please write one of the following instuctions: ADD, SEARCH, EXIT"<<std::endl;
	}
}
