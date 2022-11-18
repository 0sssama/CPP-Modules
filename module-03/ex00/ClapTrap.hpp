/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 13:45:37 by olabrahm          #+#    #+#             */
/*   Updated: 2022/11/18 15:19:01 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSTRAP_HPP
# define CLASSTRAP_HPP

# include <iostream>
# include <iomanip>
# include <sstream>

class ClapTrap
{
	private:
		std::string		_name;
		int				_hit_points;
		int				_energy;
		int				_attack;

	public:

		// Orthodox Canonical
		ClapTrap();
    	ClapTrap(const ClapTrap &clapTrap);
    	~ClapTrap();
    	ClapTrap &operator=(const ClapTrap &clapTrap);

		ClapTrap(std::string name);

		// getters and setters
		std::string const 		&getName()		const;
		int const				getHitPoints()	const;
		int const				getEnergy()		const;
		int const				getAttack()		const;

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif
