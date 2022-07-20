/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 08:10:20 by olabrahm          #+#    #+#             */
/*   Updated: 2022/07/20 06:47:43 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
# include <iostream>

class HumanB {

	private:
		Weapon				*weapon;
		std::string			name;
	
	public:
		HumanB(std::string name);
		~HumanB(void);
		
		void				attack(void);
		
		std::string			&getName(void);
		void				setName(std::string name);
		
		void				setWeapon(Weapon &weapon);

};

#endif
