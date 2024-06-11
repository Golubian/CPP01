/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachalif <gachalif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 09:56:09 by gachalif          #+#    #+#             */
/*   Updated: 2024/06/11 10:22:15 by gachalif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Weapon.hpp"

#ifndef HUMANB_HPP
#define HUMANB_HPP

class HumanB{
	private:
	Weapon *boundWeapon;
	std::string name;

	public:
	HumanB(std::string name);
	HumanB(std::string name, Weapon &weapon);
	void attack(void);
	void setWeapon(Weapon &newWeapon);
};

#endif