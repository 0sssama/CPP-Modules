/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 14:33:20 by olabrahm          #+#    #+#             */
/*   Updated: 2022/11/22 14:59:27 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	protected:
		std::string		type;

	public:
		// Orthodox Canonical
		Animal();
    	Animal(const Animal &animal);
    	~Animal();
    	Animal &operator=(const Animal &animal);

		Animal(std::string const &type);

		std::string	const	&getType()	const;

		void	makeSound()	const;
};


#endif
