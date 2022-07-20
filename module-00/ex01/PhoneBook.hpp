/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 14:06:40 by olabrahm          #+#    #+#             */
/*   Updated: 2022/07/11 12:00:28 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook {
	
	private:
		// member attributes
		Contact			contacts[8];
		unsigned int	nbContacts;
		unsigned int	current_index;

		// private member functions
		void			printColumn(std::string columns[4]);

	
	public:

		// member functions
		unsigned int	getNbContacts(void);
		void			printContacts(void);
		void			printContact(unsigned int index);
		int				addContact(
			std::string firstName,
			std::string lastName,
			std::string nickname,
			std::string phone,
			std::string darkestSecret
		);

		// constructor and destructor
		PhoneBook(void);
		~PhoneBook(void);
};

#endif