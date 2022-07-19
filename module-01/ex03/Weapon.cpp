/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 08:01:52 by olabrahm          #+#    #+#             */
/*   Updated: 2022/07/19 08:34:58 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void)
{
	this->type = nullptr;
	std::cout << "Weapon created (type: none)" << std::endl;
}

Weapon::Weapon(std::string type)
{
	this->type = type;
	std::cout << "Weapon created (type: " << type << ")" << std::endl;
}

void	Weapon::setType(std::string type)
{
	this->type = type;
	std::cout << "Weapon type set to " << type << std::endl;
}

const std::string&	Weapon::getType(void)
{
	return this->type;
}

Weapon::~Weapon(void)
{
	std::cout << "Weapon destroyed" << std::endl;
}
