/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 14:24:05 by olabrahm          #+#    #+#             */
/*   Updated: 2022/07/10 22:19:33 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

// default constructor
Contact::Contact(void)
{
	this->id = 0;
	this->firstName = "";
	this->lastName = "";
	this->nickname = "";
	this->phone = "";
	this->darkestSecret = "";
	// std::cout << "Default Contact created" << std::endl;
	return ;
}

void Contact::setContact(
	std::string firstName,
	std::string lastName,
	std::string nickname,
	std::string phone,
	std::string darkestSecret
)
{
	static int	i;

	this->id = i++;
	this->firstName = firstName;
	this->lastName = lastName;
	this->nickname = nickname;
	this->phone = phone;
	this->darkestSecret = darkestSecret;

	// std::cout << "Contact '" << firstName << "' created" << std::endl;
	return ;
}

std::string	Contact::getFirstName(void)
{
	return (this->firstName);
}

std::string	Contact::getLastName(void)
{
	return (this->lastName);
}

std::string	Contact::getNickname(void)
{
	return (this->nickname);
}

std::string	Contact::getPhone(void)
{
	return (this->phone);
}

std::string	Contact::getDarkestSecret(void)
{
	return (this->darkestSecret);
}

Contact::~Contact(void)
{
	// std::cout << "Contact '" << this->firstName << "' destroyed" << std::endl;
	return ;
}