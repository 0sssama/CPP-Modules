/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 21:20:32 by olabrahm          #+#    #+#             */
/*   Updated: 2022/11/21 18:25:49 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int					_value;
		static const int	_bits = 8;
		
	public:
		Fixed(void);
		Fixed(const Fixed &fixed);
		~Fixed(void);

		// constructors with values
		Fixed(int const value);
		Fixed(float const value);

		// copy assignment operator
		Fixed	&operator=(const Fixed &fixed);

		// min and max public functions
		static Fixed		&min(Fixed &fixed1, Fixed &fixed2);
		static const Fixed	&min(const Fixed &fixed1, const Fixed &fixed2);
		static Fixed		&max(Fixed &fixed1, Fixed &fixed2);
		static const Fixed	&max(const Fixed &fixed1, const Fixed &fixed2);
		
		// pre-decrement and pre-increment operators
		Fixed	&operator++();
		Fixed	&operator--();

		// post-decrement and post-increment operators
		Fixed	operator++(int);
		Fixed	operator--(int);

		// getters and setters		
		int 	getRawBits(void)	const;
		void	setRawBits(int const raw);

		float	toFloat(void)	const;
		int		toInt(void)		const;

		// the 6 comparison operators
		int		operator>(const Fixed &fixed)	const;
		int		operator<(const Fixed &fixed)	const;
		int		operator<=(const Fixed &fixed)	const;
		int		operator>=(const Fixed &fixed)	const;
		int		operator==(const Fixed &fixed)	const;
		int		operator!=(const Fixed &fixed)	const;

		// the arithmetic operators
		Fixed	operator+(const Fixed &fixed);
		Fixed	operator-(const Fixed &fixed);
		Fixed	operator*(const Fixed &fixed);
		Fixed	operator/(const Fixed &fixed);
};

std::ostream	&operator<<(std::ostream &out, const Fixed &fixed);

#endif
