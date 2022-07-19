/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 08:10:18 by olabrahm          #+#    #+#             */
/*   Updated: 2022/07/19 08:23:49 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include <iostream>

class HumanA {

	private:
		Weapon				weapon;
		std::string			name;
	
	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA(void);
		
		void				attack(void);
		
		std::string			&getName(void);
		void				setName(std::string name);
		
		Weapon				&getWeapon(void);
		void				setWeapon(Weapon &weapon);

};

#endif
