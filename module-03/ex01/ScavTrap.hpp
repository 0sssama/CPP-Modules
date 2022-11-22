/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 11:01:19 by olabrahm          #+#    #+#             */
/*   Updated: 2022/11/22 11:48:56 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

class	ScavTrap: public ClapTrap {
	public:
		// Orthodox Canonical Form
		ScavTrap();
    	ScavTrap(const ScavTrap &scavTrap);
    	~ScavTrap();
    	ScavTrap &operator=(const ScavTrap &ScavTrap);
		
		ScavTrap(std::string const &name);

		void	guardGate();

		void attack(const std::string &target);
};

#endif
