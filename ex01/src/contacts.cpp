/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkonstan <hkonstan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 20:04:48 by hkonstan          #+#    #+#             */
/*   Updated: 2026/08/11 21:01:04 by hkonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACTS
#define CONTACTS

# include "../include/contacts.hpp"

contacts::contacts(){
}

contacts::contacts(const contacts& other){
	*this = other;
} 
         
contacts &contacts::operator=(const contacts& other){
	this->first_name = other.first_name;
	this->last_name = other.last_name;
	this->number = other.number;
	this->darkest_secret =  other.darkest_secret;
	this->nick_name =  other.nick_name;
	return (*this);
}

contacts::~contacts(){
}

std::string contacts::getFirstName() const{
	return (first_name);
}

std::string contacts::getLastName() const{
	return (last_name);
}

std::string contacts::getNickName() const{
	return (nick_name);
}

std::string contacts::getNumber() const{
	return (number);
}

std::string contacts::getDarkestSecret() const{
	return (darkest_secret);
}

bool contacts::addName(void){
	std::string input;
	std::cout<<"Please write the first name:"<<std::endl;
	if (!std::getline(std::cin, input))
		return false;
	while (input.length() <= 0){
		std::cout<<"Please write a non empty first name:"<<std::endl;
		if (!std::getline(std::cin, input))
			return false;
	}
	first_name = input;
	return true;
}

bool contacts::addLastName(void){
	std::string input;
	std::cout<<"Please write the last name:"<<std::endl;
	if (!std::getline(std::cin, input))
		return false;
	while (input.length() <= 0){
		std::cout<<"Please write a non empty last name:"<<std::endl;
		if (!std::getline(std::cin, input))
			return false;
	}
	last_name = input;
	return true;
}

bool contacts::addNickName(void){
	std::string input;
	std::cout<<"Please write the nick name:"<<std::endl;
	if (!std::getline(std::cin, input))
		return false;
	while (input.length() <= 0){
		std::cout<<"Please write a non empty nick name:"<<std::endl;
		if (!std::getline(std::cin, input))
			return false;
	}
	nick_name = input;
	return true;
}

bool contacts::addSecret(void){
	std::string input;
	std::cout<<"Please write the darkest secret:"<<std::endl;
	if (!std::getline(std::cin, input))
		return false;
	while (input.length() <= 0){
		std::cout<<"Please write a non empty darkest secret:"<<std::endl;
		if (!std::getline(std::cin, input))
			return false;;
	}
	darkest_secret = input;
	return true;
}

bool contacts::addNumber(void){
	std::string input;
	std::cout<<"Please write the number:"<<std::endl;
	if (!std::getline(std::cin, input))
		return false;
	while (input.length() <= 0){
		std::cout<<"Please write a non empty number:"<<std::endl;
		if (!std::getline(std::cin, input))
			return false;
	}
	number = input;
	return true;
	
}

#endif