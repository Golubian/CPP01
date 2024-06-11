/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachalif <gachalif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 09:29:22 by gachalif          #+#    #+#             */
/*   Updated: 2024/06/11 10:20:37 by gachalif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
	this->type = "Pipe Wrench";
}

Weapon::Weapon(std::string weaponType)
{
	this->type = weaponType;
}

void Weapon::setType(std::string newType)
{
	this->type = newType;
}

const std::string Weapon::getType()
{
	return (this->type);
}