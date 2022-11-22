/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 11:54:13 by olabrahm          #+#    #+#             */
/*   Updated: 2022/11/22 14:29:03 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

class FragTrap: public ClapTrap
{
	public:
		// Orthodox Canonical Form
		FragTrap();
    	FragTrap(const FragTrap &fragTrap);
    	~FragTrap();
    	FragTrap &operator=(const FragTrap &fragTrap);
		
		FragTrap(std::string const &name);

		void	highFiveGuys();
};

#endif
