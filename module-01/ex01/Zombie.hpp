/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 07:13:24 by olabrahm          #+#    #+#             */
/*   Updated: 2022/07/19 07:28:59 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{

	private:
		std::string		name;
	
	public:
	
		Zombie(std::string name);
		Zombie(void);
		~Zombie(void);


		void		announce(void);

		std::string	getName(void);
		void		setName(std::string name);

};

Zombie	*zombieHorde(int N, std::string name);


#endif