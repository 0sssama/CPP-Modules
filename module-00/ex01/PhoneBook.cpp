/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 14:09:12 by olabrahm          #+#    #+#             */
/*   Updated: 2022/07/11 12:06:11 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"
#include <stdlib.h>
#include <stdio.h>

PhoneBook::PhoneBook(void)
{
	this->nbContacts = 0;
	this->current_index = 0;
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
	this->contacts[this->current_index].setContact(
		firstName,
		lastName,
		nickname,
		phone,
		darkestSecret
	);
	this->current_index = (this->current_index + 1) % 8;
	this->nbContacts = this->nbContacts == 8 ? 8 : this->nbContacts + 1;
	return (1);
}

void	PhoneBook::printColumn(std::string column[4])
{
	std::cout << std::string(45, '-') << std::endl;
	std::cout << "|";
	for (int i = 0; i < 4; i++)
	{
		std::cout << std::setw(10) << std::right << column[i];
		std::cout << "|";
	}
	std::cout << std::endl;
	return ;
}

void	PhoneBook::printContacts(void)
{
	std::string	index_string;
	std::string	column[4] = {
		"Index",
		"First Name",
		"Last Name",
		"Nickname"
	};

	this->printColumn(column);
	for (unsigned int i = 0; i < this->nbContacts; i++)
	{
		std::string column[4] = {
			to_string(i),
			this->contacts[i].getFirstName(),
			this->contacts[i].getLastName(),
			this->contacts[i].getNickname()
		};
		this->printColumn(column);	
	}
	if (this->nbContacts > 0)
		std::cout << std::string(45, '-') << std::endl;
	return ;
}

void PhoneBook::printContact(unsigned int index)
{
	if (index >= this->nbContacts)
	{
		std::cout << "Index out of range." << std::endl;
		return ;
	}
	std::cout << "Contact " << index << ":" << std::endl;
	std::cout << "	First name: " << this->contacts[index].getFirstName() << std::endl;
	std::cout << "	Last name: " << this->contacts[index].getLastName() << std::endl;
	std::cout << "	Nickname: " << this->contacts[index].getNickname() << std::endl;
	std::cout << "	Phone: " << this->contacts[index].getPhone() << std::endl;
	std::cout << "	Darkest secret: " << this->contacts[index].getDarkestSecret() << std::endl;
	return ;
}

unsigned int	PhoneBook::getNbContacts(void)
{
	return (this->nbContacts);
}

PhoneBook::~PhoneBook(void)
{
	// std::cout << "PhoneBook destroyed" << std::endl;
	return ;
}