/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachalif <gachalif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 17:44:46 by gachalif          #+#    #+#             */
/*   Updated: 2024/06/11 09:12:21 by gachalif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP

# include <string>
# include <iostream>

# define ZOMBIE_HPP
	class Zombie 
	{
			private:
			std::string	name;

			public:
			void	rename(std::string newName);
			Zombie();
			Zombie(std::string name);
			~Zombie();
			void	announce(void);
	};

	Zombie	*zombieHorde(int N, std::string name);
#endif