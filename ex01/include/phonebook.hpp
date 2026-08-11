/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkonstan <hkonstan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 20:06:04 by hkonstan          #+#    #+#             */
/*   Updated: 2026/08/11 19:40:38 by hkonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK
#define PHONEBOOK

#include "contacts.hpp"

class	phonebook {
	public:
		//Utility functions:
		void show_contact(std::string index);
		void search(void);
		void addContact(int index, contacts new_contact);
		int			length();
	private:
		contacts dataset[8];
};

#endif