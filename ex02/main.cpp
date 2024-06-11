/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachalif <gachalif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 17:52:49 by gachalif          #+#    #+#             */
/*   Updated: 2024/06/11 09:24:44 by gachalif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main(void)
{
	std::string brainSTR;
	std::string *stringPTR;
	std::string &stringREF = brainSTR;
	
	brainSTR = "HI THIS IS BRAIN";
	stringPTR = &brainSTR;

	std::cout << &brainSTR << " Address of brainSTR" << std::endl;
	std::cout << stringPTR << " Address stored in stringPTR" << std::endl;
	std::cout << &stringREF << " Address stored in &stringREF" << std::endl << std::endl;

	std::cout << brainSTR << " Value of brainSTR" << std::endl;
	std::cout << *stringPTR << " Value pointed by stringPTR" << std::endl;
	std::cout << stringREF << " Value pointed by &stringREF" << std::endl;
}