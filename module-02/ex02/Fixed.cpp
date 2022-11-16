/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 21:20:27 by olabrahm          #+#    #+#             */
/*   Updated: 2022/11/16 21:20:29 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
/*
	* left shift to go from float to fixed point value
	* right shift to go from fixed point value aggregate to float
*/

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->_value = 0;
}

Fixed::Fixed(int const value)
{
	std::cout << "Int constructor called" << std::endl;
	this->setRawBits(value << this->_bits);
}

Fixed::Fixed(float const value)
{
	int	new_value;

	std::cout << "Float constructor called" << std::endl;
	// we get the float value that we want to store, and turn it into a
	// fix point, and we store the fixed points.
	new_value = (int) roundf(value * (1 << this->_bits));
	this->setRawBits(new_value);
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_value = fixed._value;
}

Fixed	&Fixed::operator=(const Fixed &fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_value = fixed._value;
	return (*this);
}

std::ostream	&operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return (out);
}

int	Fixed::getRawBits(void) const
{
	return (this->_value);
}

void	Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}

float	Fixed::toFloat(void) const
{
	float	output;

	output = (double) this->_value / (double) (1 << this->_bits);
	return output;
}

int		Fixed::toInt(void)		const
{
	int	output;

	output = this->_value >> this->_bits;
	return output;
}
