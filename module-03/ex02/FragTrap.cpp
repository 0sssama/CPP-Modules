/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 11:56:54 by olabrahm          #+#    #+#             */
/*   Updated: 2022/11/22 14:29:44 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap("FragTrap", 100, 100, 30)
{
	std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap::FragTrap(std::string const &name): ClapTrap(name, 100, 100, 30)
{
	std::cout << "FragTrap name constructor called" << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap &fragTrap)
{
	std::cout << "FragTrap copy assignment operator called" << std::endl;
	this->_name = fragTrap.getName();
	this->_hit_points = fragTrap.getHitPoints();
	this->_energy = fragTrap.getEnergy();
	this->_attack = fragTrap.getAttack();
}

void	FragTrap::highFiveGuys()
{
	std::cout << "Some randmo positive high fives request on the std output ;)" << std::endl;
}
