/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachalif <gachalif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 16:15:23 by gachalif          #+#    #+#             */
/*   Updated: 2024/06/12 16:36:32 by gachalif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
    Harl harl;

	if (argc > 1)
    	harl.complain(argv[1]);
	else
		std::cout << "Give something for harl to complain about!" << std::endl;
    return 0;
}