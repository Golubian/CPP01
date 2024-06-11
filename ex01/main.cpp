/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachalif <gachalif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 17:52:49 by gachalif          #+#    #+#             */
/*   Updated: 2024/06/11 09:16:54 by gachalif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int zombieAmount;
	Zombie *horde;
	
	zombieAmount = 6;
	horde = zombieHorde(zombieAmount, "Braini4K");

	for (int i = zombieAmount; i < zombieAmount; i++)
	{
		horde[i].announce();
	}
	delete [] horde;
}