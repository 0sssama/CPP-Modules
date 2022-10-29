/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 20:05:34 by olabrahm          #+#    #+#             */
/*   Updated: 2022/10/29 20:27:25 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	private:
		int					_value;
		static const int	_bits = 8;
		
	public:
		Fixed(void);
		Fixed(const Fixed &fixed);
		~Fixed(void);
		Fixed	&operator=(const Fixed &fixed);
		
		int 	getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif
