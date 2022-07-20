/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 07:04:55 by olabrahm          #+#    #+#             */
/*   Updated: 2022/07/20 07:18:42 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

std::string	replace(std::string &text, std::string &substring, std::string &newstring)
{
	(void) substring;
	(void) newstring;
	
	return (text);
}

std::string	filecontent(std::string &filename)
{
	std::ifstream	file(filename.c_str());
	std::string		content;
	
	content = "";
	if (file.is_open())
	{
		content.assign(
			(std::istreambuf_iterator<char>(file) ),
			(std::istreambuf_iterator<char>()    ) 
		);
		file.close();
	} else {
		std::cout << "Error: can't open file " << filename << std::endl;
		exit(1);
	}
	return (content);
}

void	create_replace(std::string &filename, std::string &substring, std::string &newstring)
{
	(void) substring;
	(void) newstring;
	
	std::string	content = filecontent(filename);

	std::cout << "File content: " << content << std::endl;
}
