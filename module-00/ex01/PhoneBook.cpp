/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 14:09:12 by olabrahm          #+#    #+#             */
/*   Updated: 2022/07/10 21:35:19 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook(void)
{
	this->nbContacts = 0;
	std::cout << "PhoneBook created" << std::endl;
	return ;
}

void	PhoneBook::addContact(
	std::string firstName,
	std::string lastName,
	std::string nickname,
	std::string phone,
	std::string darkestSecret
)
{
	if (this->nbContacts > 8)
	{
		std::cout << "PhoneBook is full" << std::endl;
		return ;
	}
	this->contacts[this->nbContacts] = Contact(
		firstName,
		lastName,
		nickname,
		phone,
		darkestSecret
	);
	this->nbContacts++;
	return ;
}

void	PhoneBook::printContacts(void)
{
	for (unsigned int i = 0; i < this->nbContacts; i++)
	{
		std::cout << "Contact " << i + 1 << ":" << std::endl;
		std::cout << "First name: " << this->contacts[i].getFirstName() << std::endl;
		std::cout << "Last name: " << this->contacts[i].getLastName() << std::endl;
		std::cout << "Nickname: " << this->contacts[i].getNickname() << std::endl;
		std::cout << "Phone: " << this->contacts[i].getPhone() << std::endl;
		std::cout << "Darkest secret: " << this->contacts[i].getDarkestSecret() << std::endl;
	}
	return ;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "PhoneBook destroyed" << std::endl;
	return ;
}