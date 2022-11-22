/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 14:47:51 by olabrahm          #+#    #+#             */
/*   Updated: 2022/11/22 14:59:40 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal("Dog")
{
	std::cout << "Default Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &dog): Animal(dog.type)
{
	std::cout << "Dog Copy constructor called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog Destructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &dog)
{
	std::cout << "Dog Copy assignment operator called" << std::endl;
	this->type = dog.getType();
	return (*this);
}

void	Dog::makeSound()	const
{
	std::cout << "BARK! BARK!" << std::endl;
}
