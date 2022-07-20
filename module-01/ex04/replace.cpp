/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 07:04:55 by olabrahm          #+#    #+#             */
/*   Updated: 2022/07/20 07:31:07 by olabrahm         ###   ########.fr       */
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
	std::string		line;
	
	if (file.is_open())
	{
		while (file)
		{
			std::getline(file, line);
			content += line + "\n";
		}
		file.close();
	} else {
		std::cout << "Error: can't open file " << filename << std::endl;
		exit(1);
	}
	return (content);
}

std::string	replace_substr(std::string &content, std::string &substring, std::string &newstring)
{
	std::string		result;
	size_t			pos;
	
	result = content;
	if (substring.length() == 0)
		return (result);
	pos = result.find(substring);
	while (pos != std::string::npos)
	{
		result = result.erase(pos, substring.length());
		result = result.insert(pos, newstring);
		pos = result.find(substring, pos + newstring.length());
	}
	return (result);
}

void	create_replace(std::string &filename, std::string &substring, std::string &newstring)
{
	(void) substring;
	(void) newstring;
	
	std::string	content = filecontent(filename);

	std::cout << "File content: " << content << std::endl;

	content = replace_substr(content, substring, newstring);

	std::cout << "After replacement: " << content << std::endl;
}
