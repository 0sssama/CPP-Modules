/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 12:04:16 by olabrahm          #+#    #+#             */
/*   Updated: 2022/07/11 12:27:50 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

std::string	to_string(unsigned int n)
{
	std::string			input;
	std::stringstream	output;
	
	output << n;
	output >> input;
	return (input);
}
