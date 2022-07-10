/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 14:12:58 by olabrahm          #+#    #+#             */
/*   Updated: 2022/07/10 22:03:21 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"
#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	phonebook;
	std::string	input;
	
	while (69)
	{
		std::cout << "CMD >> ";
		if (!getline(std::cin, input))
			return ((std::cout << std::endl), 0);
		std::cout << "You typed : " << input << std::endl;	
	}
	return (0);
}