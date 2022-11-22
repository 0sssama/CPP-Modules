/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 13:53:28 by olabrahm          #+#    #+#             */
/*   Updated: 2022/11/22 11:47:24 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->_name = "ClapTrap";
	this->_hit_points = 10;
	this->_energy = 10;
	this->_attack = 0;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &clapTrap)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_name = clapTrap.getName();
	this->_hit_points = clapTrap.getHitPoints();
	this->_energy = clapTrap.getEnergy();
	this->_attack = clapTrap.getAttack();
}

ClapTrap::ClapTrap(std::string const &name)
{
	std::cout << "Name constructor called" << std::endl;
	this->_name = name;
	this->_hit_points = 10;
	this->_energy = 10;
	this->_attack = 0;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &clapTrap)
{
	std::cout << "Copy Assignment operator" << std::endl;
	this->_name = clapTrap.getName();
	this->_hit_points = clapTrap.getHitPoints();
	this->_energy = clapTrap.getEnergy();
	this->_attack = clapTrap.getAttack();
	return (*this);
}

std::string const	&ClapTrap::getName()	const
{
	return (this->_name);
}

int	ClapTrap::getHitPoints()	const
{
	return (this->_hit_points);
}

int	ClapTrap::getEnergy()	const
{
	return (this->_energy);
}

int	ClapTrap::getAttack()	const
{
	return (this->_attack);
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->_energy <= 0)
	{
		std::cout << "ClapTrap " << this->getName()
			<< " cannot attack due to lack of energy." << std::endl;
		return ;
	}
	
	std::cout << "ClapTrap " << this->getName() << " attacks "
		<< target << " causing " << this->getAttack()
		<< " points of damage!" << std::endl;

	this->_energy--;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energy <= 0)
	{
		std::cout << "ClapTrap " << this->getName() <<
		" cannot be repaired due to lack of energy." << std::endl;
		return ;
	}
	
	std::cout << "ClapTrap " << this->getName() << " just got repaired gaining "
		<< amount << " hit points back." << std::endl;

	this->_hit_points += amount;
	this->_energy--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hit_points <= 0)
	{
		std::cout << "ClapTrap "  << this->getName()
			<< " is already dead!" << std::endl;
	
		this->_hit_points = 0;
	
		return ;
	}

	std::cout << "ClapTrap "  << this->getName() << " just took " << amount
			<< " of hit point damage." << std::endl;

	this->_hit_points -= amount;

	if (this->_hit_points <= 0)
	{
		std::cout << "ClapTrap " << this->getName() << " has died!" << std::endl;
		this->_hit_points = 0;
	}
}
