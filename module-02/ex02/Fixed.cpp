/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 21:20:27 by olabrahm          #+#    #+#             */
/*   Updated: 2022/11/16 22:09:11 by olabrahm         ###   ########.fr       */
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
	return (output);
}

int		Fixed::toInt(void)		const
{
	int	output;

	output = this->_value >> this->_bits;
	return (output);
}

int	operator>(const Fixed &fixed1, const Fixed &fixed2)
{
	return (fixed1.getRawBits() > fixed2.getRawBits());
}

int	operator<(const Fixed &fixed1, const Fixed &fixed2)
{
	return (fixed1.getRawBits() < fixed2.getRawBits());
}

int	operator>=(const Fixed &fixed1, const Fixed &fixed2)
{
	return (fixed1.getRawBits() >= fixed2.getRawBits());
}

int	operator<=(const Fixed &fixed1, const Fixed &fixed2)
{
	return (fixed1.getRawBits() <= fixed2.getRawBits());
}

int	operator==(const Fixed &fixed1, const Fixed &fixed2)
{
	return (fixed1.getRawBits() == fixed2.getRawBits());
}

int	operator!=(const Fixed &fixed1, const Fixed &fixed2)
{
	return (fixed1.getRawBits() != fixed2.getRawBits());
}

Fixed	&operator+(const Fixed &fixed1, const Fixed &fixed2)
{
	Fixed	output;

	output.setRawBits(fixed1.getRawBits() + fixed2.getRawBits());
	return (output);
}

Fixed	&operator-(const Fixed &fixed1, const Fixed &fixed2)
{
	Fixed	output;

	output.setRawBits(fixed1.getRawBits() - fixed2.getRawBits());
	return (output);
}

Fixed	&operator*(const Fixed &fixed1, const Fixed &fixed2)
{
	Fixed	output;

	output.setRawBits(fixed1.getRawBits() * fixed2.getRawBits());
	return (output);
}

Fixed	&operator/(const Fixed &fixed1, const Fixed &fixed2)
{
	Fixed	output;

	output.setRawBits(fixed1.getRawBits() / fixed2.getRawBits());
	return (output);
}

Fixed	&Fixed::min(Fixed &fixed1, Fixed &fixed2)
{
	if (fixed1 > fixed2)
		return (fixed2);
	return (fixed1);
}

Fixed	&Fixed::min(const Fixed &fixed1, const Fixed &fixed2)
{
	Fixed	output;

	if (fixed1 > fixed2)
		output = fixed2;
	else
		output = fixed1;
	return (output);
}

Fixed	&Fixed::max(Fixed &fixed1, Fixed &fixed2)
{
	if (fixed1 < fixed2)
		return (fixed2);
	return (fixed1);
}

Fixed	&Fixed::max(const Fixed &fixed1, const Fixed &fixed2)
{
	Fixed	output;

	if (fixed1 < fixed2)
		output = fixed2;
	else
		output = fixed1;
	return (output);
}

// like calling ++a
Fixed	&Fixed::operator++()
{
	this->_value++;
	return (*this);
}

// like calling --a
Fixed	&Fixed::operator--()
{
	this->_value--;
	return (*this);
}

// like calling a++
Fixed	&Fixed::operator++(int)
{
	Fixed	output(*this);

	this->_value++;
	return (output);
}

// like calling a++
Fixed	&Fixed::operator--(int)
{
	Fixed	output(*this);

	this->_value--;
	return (output);
}