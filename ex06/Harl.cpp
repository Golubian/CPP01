/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachalif <gachalif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 15:47:56 by gachalif          #+#    #+#             */
/*   Updated: 2024/06/12 16:44:32 by gachalif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug()
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << std::endl;
}

void	Harl::info()
{
	std::cout <<  "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
}

void	Harl::warning()
{
	std::cout <<  "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error()
{
	std::cout <<  "This is unacceptable ! I want to speak to the manager now." << std::endl;
}


void	Harl::complain(std::string level)
{
	void (Harl::*levels[4])();
	levels[0] = &Harl::debug;
    levels[1] = &Harl::info;
    levels[2] = &Harl::warning;
    levels[3] = &Harl::error;

	std::string	keys[4];
	keys[0] = "DEBUG";
    keys[1] = "INFO";
    keys[2] = "WARNING";
    keys[3] = "ERROR";


	int chosen_level = -1;
	for (int i = 0; i < 4; i++)
	{
		if (level == keys[i])
			chosen_level = i;
	}
	


	if (chosen_level < 0)
		std::cout <<  "Harl is a bit confused..." << std::endl;
	else
	{
		for (int i = 0; i < 4; i++)
		{
			if (chosen_level <= i)
			{
				std::cout << "[ " << keys[i] << " ]" << std::endl;
				(this->*levels[i])();
				std::cout << std::endl;
			}
		}
	}
}

// On a pas le droit a map...
// void	Harl::complain(std::string level)
// {
// 	std::map<std::string, void (Harl::*)()> levels;
// 	levels["DEBUG"] = &Harl::debug;
//     levels["INFO"] = &Harl::info;
//     levels["WARNING"] = &Harl::warning;
//     levels["ERROR"] = &Harl::error;

// 	void (Harl::*func)();
// 	if (levels[level])
// 	{
// 		func = levels[level];
// 		(this->*func)();
// 	}
// 	else
// 		std::cout <<  "Harl is a bit confused..." << std::endl;
// }