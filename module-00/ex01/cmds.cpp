/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmds.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 22:13:46 by olabrahm          #+#    #+#             */
/*   Updated: 2022/07/10 22:22:12 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

void	ft_add(PhoneBook *phonebook)
{
	std::string firstName;
	std::string lastName;
	std::string nickname;
	std::string phone;
	std::string darkestSecret;
	int			success;

	std::cout << "Enter first name: ";
	if (!getline(std::cin, firstName))
		return ;
	std::cout << "Enter last name: ";
	if (!getline(std::cin, lastName))
		return ;
	std::cout << "Enter nickname: ";
	if (!getline(std::cin, nickname))
		return ;
	std::cout << "Enter phone: ";
	if (!getline(std::cin, phone))
		return ;
	std::cout << "Enter darkest secret: ";
	if (!getline(std::cin, darkestSecret))
		return ;
	success = phonebook->addContact(firstName, lastName, nickname, phone, darkestSecret);
	if (success)
		std::cout << firstName << " was added successfully to your contact list." << std::endl;
}

void	ft_exit(void)
{
	std::cout << "See you later!" << std::endl;
	return ;
}

void	ft_not_found(void)
{
	std::cout << "Command not found!" << std::endl;
	return ;
}
