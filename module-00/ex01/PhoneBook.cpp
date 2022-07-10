/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 14:09:12 by olabrahm          #+#    #+#             */
/*   Updated: 2022/07/10 22:23:36 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

PhoneBook::PhoneBook(void)
{
	this->nbContacts = 0;
	// std::cout << "PhoneBook created" << std::endl;
	return ;
}

int	PhoneBook::addContact(
	std::string firstName,
	std::string lastName,
	std::string nickname,
	std::string phone,
	std::string darkestSecret
)
{
	this->contacts[this->nbContacts % 8].setContact(
		firstName,
		lastName,
		nickname,
		phone,
		darkestSecret
	);
	this->nbContacts = this->nbContacts == 8 ? 8 : this->nbContacts + 1;
	return (1);
}

void	PhoneBook::printContacts(void)
{
	for (unsigned int i = 0; i < this->nbContacts; i++)
	{
		std::cout << std::endl << "Contact " << i + 1 << ":";
		std::cout << "	First name: " << this->contacts[i].getFirstName() << std::endl;
		std::cout << "	Last name: " << this->contacts[i].getLastName() << std::endl;
		std::cout << "	Nickname: " << this->contacts[i].getNickname() << std::endl;
		std::cout << "	Phone: " << this->contacts[i].getPhone() << std::endl;
		std::cout << "	Darkest secret: " << this->contacts[i].getDarkestSecret() << std::endl;
	}
	return ;
}

PhoneBook::~PhoneBook(void)
{
	// std::cout << "PhoneBook destroyed" << std::endl;
	return ;
}