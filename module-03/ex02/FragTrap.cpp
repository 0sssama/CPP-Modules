/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 11:56:54 by olabrahm          #+#    #+#             */
/*   Updated: 2022/11/22 12:24:51 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap("FragTrap", 100, 50, 20)
{
	std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap::FragTrap(std::string const &name): ClapTrap(name, 100, 50, 20)
{
	std::cout << "FragTrap name constructor called" << std::endl;
}

void	FragTrap::highFiveGuys()
{
	std::cout << "Some randmo positive high fives request on the std output ;)" << std::endl;
}
