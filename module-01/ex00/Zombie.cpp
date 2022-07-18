/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 14:50:09 by olabrahm          #+#    #+#             */
/*   Updated: 2022/07/18 14:51:41 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type)
{
	this->_name = name;
	this->_type = type;
}

Zombie::~Zombie(void)
{
	std::cout << "Zombie " << this->_name << " is dead" << std::endl;
}

Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::getName(void)
{
	return this->_name;
}

Zombie::getType(void)
{
	return this->_type;
}
