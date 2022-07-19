/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 08:29:29 by olabrahm          #+#    #+#             */
/*   Updated: 2022/07/19 08:40:30 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
	std::cout << "HumanB created (name: " << name << ")" << std::endl;
}

HumanB::~HumanB(void)
{
	std::cout << "HumanB destroyed" << std::endl;
}

void	HumanB::attack(void)
{
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}

std::string&	HumanB::getName(void)
{
	return this->name;
}

void	HumanB::setName(std::string name)
{
	this->name = name;
}

Weapon	&HumanB::getWeapon(void)
{
	return this->weapon;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = weapon;
}
