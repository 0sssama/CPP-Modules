/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 07:52:59 by olabrahm          #+#    #+#             */
/*   Updated: 2022/07/20 09:16:00 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	this->levels[0] = "DEBUG";
	this->actions[0] = &Harl::debug;
	
	this->levels[1] = "INFO";
	this->actions[1] = &Harl::info;

	this->levels[2] = "WARNING";
	this->actions[2] = &Harl::warning;

	this->levels[3] = "ERROR";
	this->actions[3] = &Harl::error;

	std::cout << "init Harl" << std::endl;
}

Harl::~Harl(void)
{
	std::cout << "destroy Harl" << std::endl;
}

void	Harl::debug(void)
{
	std::cout << "[DEBUG]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[INFO]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[WARNING]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ERROR]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	int i;

	for (i = 0; i < 4 && this->levels[i] != level; i++);

	if (i == 4) std::cout << "Invalid complaint" << std::endl;
	else (this->*actions[i])();
}