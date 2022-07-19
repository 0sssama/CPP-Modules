/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 07:15:23 by olabrahm          #+#    #+#             */
/*   Updated: 2022/07/19 07:37:24 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	announceHorde(int N, Zombie *zombies)
{
	for (int i = 0; i < N; i++)
		zombies[i].announce();
}

int	main(void)
{
	Zombie	*zombies;
	int		N = 10;

	zombies = zombieHorde(N, "Mohmd");
	announceHorde(N, zombies);
	delete [] zombies;
	return 0;
}
