/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 14:35:51 by olabrahm          #+#    #+#             */
/*   Updated: 2022/11/22 14:55:51 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Default Animal constructor called" << std::endl;
	this->type = "Animal";
}

Animal::Animal(const Animal &animal)
{
	std::cout << "Animal Copy constructor called" << std::endl;
	this->type = animal.getType();
}

Animal::~Animal()
{
	std::cout << "Animal Destructor called" << std::endl;
}

Animal::Animal(std::string const &type)
{
	std::cout << "Animal Type constructor called" << std::endl;
	this->type = type;
}

Animal &Animal::operator=(const Animal &animal)
{
	std::cout << "Animal Copy assignment operator called" << std::endl;
	this->type = animal.getType();
	return (*this);
}

std::string	const	&Animal::getType()	const
{
	return (this->type);
}
