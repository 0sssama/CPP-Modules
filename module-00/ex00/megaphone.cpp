/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 18:04:03 by olabrahm          #+#    #+#             */
/*   Updated: 2022/06/27 18:30:10 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

std::string	ft_uppercase(std::string str)
{
	int i;

	i = 0;
	while (i < (int) str.length())
	{
		if (islower(str[i]))
			str[i] = toupper(str[i]);
		i++;
	}
	return (str);
}

int	main(int ac, char **av)
{
	int	i;

	i = 1;
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		while (i < ac)
			std::cout << ft_uppercase(av[i++]);
	}
	std::cout << std::endl;
	return (0);
}
