/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hariskon <hariskon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 20:06:02 by hkonstan          #+#    #+#             */
/*   Updated: 2026/08/09 16:25:12 by hariskon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void phonebook::addContact(int index, contacts new_contact) {
	dataset[index] = new_contact;
	std::cout<<"Contact has been added."<<std::endl;
}

void phonebook::show_contact(std::string index){
	
	int i = index[0] - 48;
	std::cout<<"|"<<std::setw(10)<<i<<"|";
		
	if (dataset[i].getFirstName().length() <= 10)
		std::cout << std::setw(10) << dataset[i].getFirstName() << "|";
	else
		std::cout << dataset[i].getFirstName().substr(0,9) << "." << "|";
			
	if (dataset[i].getLastName().length() <= 10)
		std::cout << std::setw(10) << dataset[i].getLastName() << "|";
	else
		std::cout << dataset[i].getLastName().substr(0,9) << "." << "|";
	
	if (dataset[i].getNickName().length() <= 10)
		std::cout << std::setw(10) << dataset[i].getNickName() << "|";
	else
		std::cout << dataset[i].getNickName().substr(0,9) << "." << "|";
	if (dataset[i].getNumber().length() <= 10)
		std::cout << std::setw(10) << dataset[i].getNumber() << "|";
	else
		std::cout << dataset[i].getNumber().substr(0,9) << "." << "|";
	if (dataset[i].getDarkestSecret().length() <= 10)
		std::cout << std::setw(10) << dataset[i].getDarkestSecret() << "|" << std::endl;
	else
		std::cout << dataset[i].getDarkestSecret().substr(0,9) << "." << "|" << std::endl;
}

void phonebook::search(void){
	int i = 0;
	while (dataset[i].getFirstName().length())
	{
		std::cout<<"|"<<std::setw(10)<<i<<"|";
		
		if (dataset[i].getFirstName().length() <= 10)
			std::cout << std::setw(10) << dataset[i].getFirstName() << "|";
		else
			std::cout << dataset[i].getFirstName().substr(0,9) << "." << "|";
			
		if (dataset[i].getLastName().length() <= 10)
			std::cout << std::setw(10) << dataset[i].getLastName() << "|";
		else
			std::cout << dataset[i].getLastName().substr(0,9) << "." << "|";
		
		if (dataset[i].getNickName().length() <= 10)
			std::cout << std::setw(10) << dataset[i].getNickName() << "|" << std::endl;
		else
			std::cout << dataset[i].getNickName().substr(0,9) << "." << "|" << std::endl;

		i++;
	}
}

int			phonebook::length(){
	int	i;
	for (i = 0; dataset[i].getFirstName().length(); i++){
	}
	return (i);
}