/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 14:43:50 by olabrahm          #+#    #+#             */
/*   Updated: 2022/11/22 14:59:43 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal("Cat")
{
	std::cout << "Default Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &cat): Animal(cat.type)
{
	std::cout << "Cat Copy constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat Destructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &cat)
{
	std::cout << "Cat Copy assignment operator called" << std::endl;
	this->type = cat.getType();
	return (*this);
}

void	Cat::makeSound()	const
{
	std::cout << "Meowww!!" << std::endl;
}
