/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 14:06:40 by olabrahm          #+#    #+#             */
/*   Updated: 2022/07/05 22:09:01 by olabrahm         ###   ########.fr       */
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

	
	public:

		// member functions
		void	addContact(
				std::string firstName,
				std::string lastName,
				std::string nickname,
				std::string phone,
				std::string darkestSecret
			);

		void	printContacts(void);

		// constructor and destructor
		PhoneBook(void);
		~PhoneBook(void);
};

#endif