/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmds.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 22:13:46 by olabrahm          #+#    #+#             */
/*   Updated: 2022/07/10 22:48:27 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int	ft_get_input(std::string *input, std::string name)
{
	std::cout << "Enter " << name << ": ";
	if (!getline(std::cin, *input) || input->empty())
	{
		std::cout << "Field cannot be empty or null." << std::endl;
		return (0);
	}
	return (1);
}

void	ft_add(PhoneBook *phonebook)
{
	std::string firstName;
	std::string lastName;
	std::string nickname;
	std::string phone;
	std::string darkestSecret;
	int			success;

	success = ft_get_input(&firstName, "First Name");
	if (!success) return ;
	success = ft_get_input(&lastName, "Last Name");
	if (!success) return ;
	success = ft_get_input(&nickname, "Nickname");
	if (!success) return ;
	success = ft_get_input(&phone, "Phone");
	if (!success) return ;
	success = ft_get_input(&darkestSecret, "Darkest Secret");
	if (!success) return ;
	success = phonebook->addContact(firstName, lastName, nickname, phone, darkestSecret);
	if (success)
		std::cout << firstName << " was added successfully to your contact list." << std::endl;
}

void	ft_search(PhoneBook *phonebook)
{
	unsigned int	index;

	phonebook->printContacts();
	std::cout << "What index are you looking for ? ";
	if (!(std::cin >> index)) return ;
	if (index >= phonebook->getNbContacts())
	{
		std::cout << "Index out of range." << std::endl;
		return ;
	}
	phonebook->printContact(index);
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
