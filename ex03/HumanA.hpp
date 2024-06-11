/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachalif <gachalif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 09:55:44 by gachalif          #+#    #+#             */
/*   Updated: 2024/06/11 10:23:53 by gachalif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Weapon.hpp"

#ifndef HUMANA_HPP
#define HUMANA_HPP

class HumanA{
	private:
	Weapon &boundWeapon;
	std::string name;

	public:
	HumanA(std::string name, Weapon &weapon);
	~HumanA();
	void attack(void);
};

#endif