/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 11:29:17 by olabrahm          #+#    #+#             */
/*   Updated: 2022/11/22 14:30:45 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap("ScavTrap", 100, 50, 20)
{
	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &scavTrap)
{
	std::cout << "ScavTrap copy assignment operator called" << std::endl;
	this->_name = scavTrap.getName();
	this->_hit_points = scavTrap.getHitPoints();
	this->_energy = scavTrap.getEnergy();
	this->_attack = scavTrap.getAttack();
}

ScavTrap::ScavTrap(std::string const &name): ClapTrap(name, 100, 50, 20)
{
	std::cout << "ScavTrap name constructor called" << std::endl;
}

void	ScavTrap::attack(const std::string &target)
{
	if (this->_energy <= 0)
	{
		std::cout << "ScavTrap " << this->getName()
			<< " cannot attack due to lack of energy." << std::endl;
		return ;
	}
	
	std::cout << "ScavTrap " << this->getName() << " attacks "
		<< target << " causing " << this->getAttack()
		<< " points of damage!" << std::endl;

	this->_energy--;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}
