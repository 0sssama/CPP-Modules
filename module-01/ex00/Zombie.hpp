/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 14:40:06 by olabrahm          #+#    #+#             */
/*   Updated: 2022/07/19 07:08:24 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{

	private:
		std::string				name;
	
	public:
		Zombie(std::string name);
		~Zombie(void);
		void					announce(void);
		std::string				getName(void);

};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);


#endif