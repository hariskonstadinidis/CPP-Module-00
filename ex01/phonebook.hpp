/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hariskon <hariskon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 20:06:04 by hkonstan          #+#    #+#             */
/*   Updated: 2026/08/08 22:07:08 by hariskon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contacts.hpp"

class	phonebook {
	public:
		//Orthocanonical prequiites:
		phonebook();                     		      // Constructor
    	~phonebook();						          // Destructor
		   
		//Utility functions:
		void show_contact(std::string index);
		void search(void);
		void addContact(int index, contacts new_contact);
		int			length();
	private:
		contacts dataset[8];
};