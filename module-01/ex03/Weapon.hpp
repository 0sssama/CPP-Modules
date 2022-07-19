/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 07:59:06 by olabrahm          #+#    #+#             */
/*   Updated: 2022/07/19 08:09:53 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon
{

	private:
		std::string		type;

	public:
		Weapon(std::string type);
		Weapon(void);
		~Weapon(void);
		
		void				setType(std::string type);
		const std::string&	getType(void);

};

#endif
