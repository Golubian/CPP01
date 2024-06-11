/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachalif <gachalif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 09:06:47 by gachalif          #+#    #+#             */
/*   Updated: 2024/06/11 09:12:18 by gachalif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie	*horde = new Zombie[N];
	
	for (int i = 0; i < N; i++)
	{
		horde[i].rename(name);
	}

	return (horde);
}