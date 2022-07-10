/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 14:10:16 by olabrahm          #+#    #+#             */
/*   Updated: 2022/07/10 21:48:35 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

class Contact {

	private:
		// member attributes
		unsigned int	id;
		std::string 	firstName;
		std::string 	lastName;
		std::string 	nickname;
		std::string 	phone;
		std::string 	darkestSecret;
	
	public:

		// member functions
		std::string	getFirstName(void);
		std::string	getLastName(void);
		std::string	getNickname(void);
		std::string	getPhone(void);
		std::string	getDarkestSecret(void);
		void		setContact(
			std::string firstName,
			std::string lastName,
			std::string nickname,
			std::string phone,
			std::string darkestSecret
		);

		// constructor and destructor
		Contact(void);
		~Contact(void);
		
};

#endif