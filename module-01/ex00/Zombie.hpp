/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 14:40:06 by olabrahm          #+#    #+#             */
/*   Updated: 2022/07/18 14:49:55 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
	public:
		Zombie(std::string name, std::string type);
		~Zombie(void);
		void					announce(void);
		std::string				getName(void);
		std::string				getType(void);

	private:
		std::string				_name;
		std::string				_type;
};

#endif