/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hariskon <hariskon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 20:04:48 by hkonstan          #+#    #+#             */
/*   Updated: 2026/08/09 16:36:40 by hariskon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACTS
#define CONTACTS

# include "contacts.hpp"

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

void contacts::addName(void){
	std::string name;
	std::cout<<"Please write the first name:"<<std::endl;
	std::getline(std::cin, name);
	while (name.length() <= 0){
		std::cout<<"Please write a non empty first name:"<<std::endl;
		std::getline(std::cin, name);
	}
	first_name = name;
}

void contacts::addLastName(void){
	std::string input;
	std::cout<<"Please write the last name:"<<std::endl;
	std::getline(std::cin, input);
	while (input.length() <= 0){
		std::cout<<"Please write a non empty last name:"<<std::endl;
		std::getline(std::cin, input);
	}
	last_name = input;
}

void contacts::addNickName(void){
	std::string input;
	std::cout<<"Please write the nick name:"<<std::endl;
	std::getline(std::cin, input);
	while (input.length() <= 0){
		std::cout<<"Please write a non empty nick name:"<<std::endl;
		std::getline(std::cin, input);
	}
	nick_name = input;
}

void contacts::addSecret(void){
	std::string input;
	std::cout<<"Please write the darkest secret:"<<std::endl;
	std::getline(std::cin, input);
	while (input.length() <= 0){
		std::cout<<"Please write a non empty darkest secret:"<<std::endl;
		std::getline(std::cin, input);
	}
	darkest_secret = input;
}

void contacts::addNumber(void){
	std::string input;
	std::cout<<"Please write the number:"<<std::endl;
	std::getline(std::cin, input);
	while (input.length() <= 0){
		std::cout<<"Please write a non empty number:"<<std::endl;
		std::getline(std::cin, input);
	}
	number = input;
}

#endif