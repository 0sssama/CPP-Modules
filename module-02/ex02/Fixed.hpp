/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 21:20:32 by olabrahm          #+#    #+#             */
/*   Updated: 2022/11/16 21:31:16 by olabrahm         ###   ########.fr       */
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

		// copy assignment operator
		Fixed	&operator=(const Fixed &fixed);

		
		Fixed(int const value);
		Fixed(float const value);
		
		int 	getRawBits(void)	const;
		void	setRawBits(int const raw);

		float	toFloat(void)	const;
		int		toInt(void)		const;
};

std::ostream	&operator<<(std::ostream &out, const Fixed &fixed);

// the 6 comparison operators
int		operator>(const Fixed &fixed1, const Fixed &fixed2);
int		operator<(const Fixed &fixed1, const Fixed &fixed2);
int		operator<=(const Fixed &fixed1, const Fixed &fixed2);
int		operator>=(const Fixed &fixed1, const Fixed &fixed2);
int		operator==(const Fixed &fixed1, const Fixed &fixed2);
int		operator!=(const Fixed &fixed1, const Fixed &fixed2);

// the arithmetic operators
Fixed	&operator+(const Fixed &fixed1, const Fixed &fixed2);
Fixed	&operator-(const Fixed &fixed1, const Fixed &fixed2);
Fixed	&operator*(const Fixed &fixed1, const Fixed &fixed2);
Fixed	&operator/(const Fixed &fixed1, const Fixed &fixed2);

#endif
