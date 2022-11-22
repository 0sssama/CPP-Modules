/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 14:46:53 by olabrahm          #+#    #+#             */
/*   Updated: 2022/11/22 14:59:24 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class	Dog: public Animal
{
	public:
		// Orthodox Canonical
		Dog();
    	Dog(const Dog &dog);
    	~Dog();
    	Dog &operator=(const Dog &dog);

		void	makeSound()	const;
};

#endif