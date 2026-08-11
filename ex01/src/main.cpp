/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkonstan <hkonstan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 20:02:00 by hkonstan          #+#    #+#             */
/*   Updated: 2026/08/11 20:59:18 by hkonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/phonebook.hpp"

int add_info(contacts *temp)
{
	if (!temp->addName() || !temp->addLastName() || !temp->addNickName()\
	 || !temp->addNumber() || !temp->addSecret())
		return (0);
	return (1);
}

int is_valid_index(std::string index, int total_contacts)
{
	if (!(index.length() == 1 &&  (index[0] >= '0' && index[0] < total_contacts + 48)))
		return (0);
	return (1);
}

int main(){
	phonebook my_phonebook;
	std::string command;
	contacts temp;
	int i = 0;
	
	std::cout<<"Please write one of the following instuctions: ADD, SEARCH, EXIT"<<std::endl;
	while (1)
	{
		if (!std::getline(std::cin, command))
			return 0;
		if (command == "ADD"){
			if (!add_info(&temp))
				break;
			my_phonebook.addContact(i, temp);
			i++;
			if (i == 8)
				i = 0;
		}
		else if  (command == "SEARCH"){
			my_phonebook.search();
			std::cout<<"Please choose one of the contacts from the phonebook."<<std::endl;
			if (!std::getline(std::cin, command))
				break;
			while(!is_valid_index(command, my_phonebook.length()))
			{
				my_phonebook.search();
				std::cout<<"Please choose a valid index number from the existing contacts."<<std::endl;
				if (!std::getline(std::cin, command))
					break;
			}
			my_phonebook.show_contact(command);
		}
		else if (command == "EXIT"){
			std::cout<<"Phonebook was aborted, bye bye!"<<std::endl;
			break;
		}
		std::cout<<"Please write one of the following instuctions: ADD, SEARCH, EXIT"<<std::endl;
	}
	return (0);
}
