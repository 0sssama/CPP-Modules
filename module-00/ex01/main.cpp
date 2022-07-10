/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 14:12:58 by olabrahm          #+#    #+#             */
/*   Updated: 2022/07/10 22:16:48 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int	main(void)
{
	PhoneBook	phonebook;
	std::string	input;
	
	while (69) // cuz why not?
	{
		std::cout << "CMD >> ";
		if (!getline(std::cin, input))
			return ((std::cout << std::endl), 1);
		if (input == "ADD")
			ft_add(&phonebook);
		else if (input == "EXIT")
			return (ft_exit(), 0);
		else
			ft_not_found();
	}
	return (0);
}