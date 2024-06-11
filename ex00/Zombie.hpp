/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachalif <gachalif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 17:44:46 by gachalif          #+#    #+#             */
/*   Updated: 2024/06/11 09:04:31 by gachalif         ###   ########.fr       */
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
			Zombie();
			Zombie(std::string name);
			~Zombie();
			void	announce(void);
	};

	Zombie	*newZombie(std::string name);
	void	randomChump(std::string name);
#endif