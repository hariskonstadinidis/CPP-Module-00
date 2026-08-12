/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contacts.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkonstan <hkonstan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 20:04:58 by hkonstan          #+#    #+#             */
/*   Updated: 2026/08/12 13:43:15 by hkonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include <iostream>
#include <cctype>

class	contacts {
	public:
		//Variable manipulation functions:
		bool addName(void);
		bool addLastName(void);
		bool addNumber(void);
		bool addNickName(void);
		bool addSecret(void);
		//Utility functions:
		std::string getFirstName() const;
		std::string getLastName() const;
		std::string getNumber() const;
		std::string getNickName() const;
		std::string getDarkestSecret() const;
	private:
		//Variables:
		std::string first_name;
		std::string last_name;
		std::string nick_name;
		std::string darkest_secret;
		std::string	number;
};