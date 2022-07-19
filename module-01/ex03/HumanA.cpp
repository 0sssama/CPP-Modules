/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 08:21:12 by olabrahm          #+#    #+#             */
/*   Updated: 2022/07/19 08:26:58 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
{
	this->weapon = weapon;
	this->name = name;
	std::cout << "HumanA created (name: " << name << ", weapon" << weapon.getType() << ")" << std::endl;
}

HumanA::~HumanA(void)
{
	std::cout << "HumanA destroyed" << std::endl;
}

void	HumanA::attack(void)
{
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}

std::string&	HumanA::getName(void)
{
	return this->name;
}

void	HumanA::setName(std::string name)
{
	this->name = name;
}

Weapon&	HumanA::getWeapon(void)
{
	return this->weapon;
}

void	HumanA::setWeapon(Weapon &weapon)
{
	this->weapon = weapon;
}
