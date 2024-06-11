/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachalif <gachalif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 09:26:56 by gachalif          #+#    #+#             */
/*   Updated: 2024/06/11 10:20:46 by gachalif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#ifndef WEAPON_HPP
# define WEAPON_HPP
	class Weapon
	{
		private:
		std::string type;
		
		public:
		Weapon();
		Weapon(std::string type);
		void setType(std::string newType);
		const std::string getType();
	};

#endif