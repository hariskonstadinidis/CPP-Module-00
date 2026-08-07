/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkonstan <hkonstan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 20:06:04 by hkonstan          #+#    #+#             */
/*   Updated: 2026/08/07 19:27:31 by hkonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contacts.hpp"

class	phonebook {
	public:
		//Orthocanonical prequiites:
		phonebook();                     		      // Constructor
    	~phonebook();						          // Destructor
		   
		//Utility functions:
		void search(void);
		void addContact(int index, contacts new_contact);
	private:
		contacts dataset[8];
};