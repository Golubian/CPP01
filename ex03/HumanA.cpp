/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachalif <gachalif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 10:02:03 by gachalif          #+#    #+#             */
/*   Updated: 2024/06/11 10:24:44 by gachalif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), boundWeapon(weapon)
{
	return ;
}

HumanA::~HumanA()
{
	//delete &(this->boundWeapon);
}

void HumanA::attack(void)
{
	std::cout << this->name << " attacks with their " << (this->boundWeapon).getType() << std::endl;
}