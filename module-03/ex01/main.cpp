/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 10:16:25 by olabrahm          #+#    #+#             */
/*   Updated: 2022/11/22 10:28:08 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	osm("osm");
	ClapTrap	ypnsl("ypnsl");

	// attacking 10 times so that we lose all energy points
	for (int i = 0; i < 10; i++) {
		std::cout << i + 1 << " " << std::endl;
		osm.attack(ypnsl.getName());
		ypnsl.takeDamage(osm.getAttack());
	}

	// logging energy
	std::cout << "[LOG] " << osm.getName() << " now has " << osm.getEnergy() << " energy." << std::endl;

	// now osm has no energy, osm should not be able to attack again
	osm.attack(ypnsl.getName());

	// this shouldnt be able to work either since osm still has no energy
	osm.beRepaired(10);

	// however this should work since ypnsl still has energy
	ypnsl.beRepaired(10);

	return (0);
}
