/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 07:04:55 by olabrahm          #+#    #+#             */
/*   Updated: 2022/07/20 07:48:24 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

std::string	filecontent(std::string &filename)
{
	std::ifstream	file(filename.c_str());
	std::string		content;
	std::string		line;
	
	if (!file.is_open()) {
		std::cout << "Error: can't open file " << filename << std::endl;
		exit(1);
	}

	while (getline(file, line))
	{
		content += line + "\n";
		getline(file, line);
	}
	file.close();

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

void	add_to_file(std::string &filename, std::string &content)
{
	std::string		new_filename = filename;
	new_filename += ".replace";

	std::ofstream	file(new_filename.c_str());
	
	if (!file.is_open()) {
		std::cout << "Error: can't open file " << filename << std::endl;
		exit(1);
	}
	file << content;
	file.close();
}

void	create_replace(std::string &filename, std::string &substring, std::string &newstring)
{
	(void) substring;
	(void) newstring;
	
	std::string	content = filecontent(filename);
	content = replace_substr(content, substring, newstring);
	add_to_file(filename, content);
	std::cout << "Success." << std::endl;
}
