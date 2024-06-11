/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachalif <gachalif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 10:08:36 by gachalif          #+#    #+#             */
/*   Updated: 2024/06/11 10:27:22 by gachalif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name, Weapon &weapon)
{
	this->name = name;
	this->boundWeapon = &weapon;
}

HumanB::HumanB(std::string name)
{
	this->name = name;
	this->boundWeapon = NULL;
}

void HumanB::setWeapon(Weapon &newWeapon)
{
	this->boundWeapon = &newWeapon;
}

void HumanB::attack(void)
{
	if (this->boundWeapon == NULL)
		std::cout << this->name << " attacks with their uh..." << std::endl;
	else
		std::cout << this->name << " attacks with their " << (this->boundWeapon)->getType() << std::endl;
}
