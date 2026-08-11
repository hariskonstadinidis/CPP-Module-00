/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkonstan <hkonstan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 20:06:02 by hkonstan          #+#    #+#             */
/*   Updated: 2026/08/11 19:44:23 by hkonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/phonebook.hpp"

void phonebook::addContact(int index, contacts new_contact) {
	dataset[index] = new_contact;
	std::cout<<"Contact has been added."<<std::endl;
}

void phonebook::show_contact(std::string index){
	
	int i = index[0] - 48;
	std::cout << "|" << i << "|" << std::endl;
	std::cout << "|" << dataset[i].getFirstName() << "|" << std::endl;
	std::cout << "|" << dataset[i].getLastName() << "|" << std::endl;
	std::cout << "|" << dataset[i].getNickName() << "|" << std::endl;
	std::cout << "|" << dataset[i].getNumber() << "|" << std::endl;
	std::cout << "|" << dataset[i].getDarkestSecret()  << "|" << std::endl;
}

void phonebook::search(void){
	int i = 0;
	while (i < length())
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

int	phonebook::length(){
	int	i;
	for (i = 0; i < 8 && !dataset[i].getFirstName().empty(); i++){}
	return (i);
}