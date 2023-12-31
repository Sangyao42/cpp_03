/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawang <sawang@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 00:55:11 by sawang            #+#    #+#             */
/*   Updated: 2023/10/25 12:24:13 by sawang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

#include <iostream>

int	main(void)
{
	/**
	 * ScavTrap test
	*/
	std::cout << std::endl;
	ScavTrap	ScavJim("ScavJim");
	ScavTrap	ScavBob("ScavBob");
	ClapTrap	John("John");

	std::cout << std::endl;

	for (int i = 0; i < 6; i++)
	{
		ScavJim.attack("ScavBob");
		if (i == 1)
			ScavBob.guardGate();
		ScavBob.takeDamage(ScavJim.getAttackDamage());
		ScavBob.beRepaired(1);
	}

	std::cout << std::endl;

	// for (int i = 0; i < 4; i++)
	// {
		John.attack("ScavJim");
		ScavJim.takeDamage(John.getAttackDamage());
		ScavJim.beRepaired(1);
	// }

	std::cout << std::endl;

	/**
	 * ScavTrap copy constructor and copy assignment operator test
	*/
	ScavTrap	a(ScavJim);
	std::cout << a.getAttackDamage() << std::endl;

	// a = a;

	std::cout << std::endl;

	return (0);
}
