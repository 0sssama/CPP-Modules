/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 07:00:30 by olabrahm          #+#    #+#             */
/*   Updated: 2022/07/20 07:06:07 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Usage: ./replace <filname> <substring> <newstring>" << std::endl;
		return (1);
	}

	std::string filename = av[1];
	std::string substring = av[2];
	std::string newstring = av[3];

	create_replace(filename, substring, newstring);
	return (0);
}
