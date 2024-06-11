/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachalif <gachalif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 17:47:10 by gachalif          #+#    #+#             */
/*   Updated: 2024/06/11 09:05:08 by gachalif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	this->name = "Zombie";
}

Zombie::Zombie(std::string name)
{
	this->name = name;
}

Zombie::~Zombie()
{
	std::cout << "Zombie \""<< this->name << "\" has been slain. (Destroyed)" << std::endl; 
}

void	Zombie::announce(void)
{
	unsigned int	random_seed;

	random_seed = (unsigned long) this;
	std::cout << this->name << ": Bra";

	// Pour pas utiliser rand:
	// std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	for (int i = 0; i < ((rand_r(&random_seed) % 7) + 1); i++)
	{
		std::cout << "i";
	}
	for (int i = 0; i < ((rand_r(&random_seed) % 5) + 1); i++)
	{
		std::cout << "n";
	}
	for (int i = 0; i < ((rand_r(&random_seed) % 5)); i++)
	{
		std::cout << "z";
	}
	std::cout << "Z..." << std::endl;
}