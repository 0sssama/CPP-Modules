/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 14:42:36 by olabrahm          #+#    #+#             */
/*   Updated: 2022/11/22 14:59:19 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class	Cat: public Animal
{
	public:
		// Orthodox Canonical
		Cat();
    	Cat(const Cat &cat);
    	~Cat();
    	Cat &operator=(const Cat &cat);
		
		void	makeSound()	const;
};

#endif
