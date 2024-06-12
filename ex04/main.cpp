/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachalif <gachalif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 10:29:08 by gachalif          #+#    #+#             */
/*   Updated: 2024/06/12 15:44:06 by gachalif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

static int ft_replace(std::ifstream	*instream, std::ofstream *outstream, std::string to_replace, std::string replace_with)
{
	std::string buffer;
	size_t		pos;

	while (getline(*instream, buffer, '\0'))
	{
		pos = buffer.find(to_replace);
		while (pos != std::string::npos)
		{
			buffer.erase(pos, to_replace.length());
			*outstream << buffer.substr(0, pos) << replace_with;
			buffer.erase(0, pos);
			pos = buffer.find(to_replace);
		}
		*outstream << buffer;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	std::ifstream	instream;
	std::ofstream	outstream;
	std::string		infile;
	std::string		outfile;
	std::string		to_replace;
	std::string		replace_with;

	if (argc < 4)
		return (std::cerr << "Not enough arguments; expected 3, got " << argc - 1 << std::endl, 1);
	infile = argv[1];
	to_replace = argv[2];
	replace_with = argv[3];
	if (to_replace.length() <= 0)
		return (std::cerr << "To replace string is invalid;" << argv[2] << std::endl, 1);

	instream.open(infile.c_str());
	if (instream.bad() || !instream.is_open())
		return (std::cerr << "Infile stream error; couldn't open file " << infile << std::endl, 1);
	outfile = infile + ".replace";
	outstream.open(outfile.c_str());
	if (outstream.bad() || !outstream.is_open())
		return (instream.close(), std::cerr << "Outfile stream error; couldn't open file " << outfile << std::endl, 1);
	ft_replace(&instream, &outstream, to_replace, replace_with);
	outstream.close();
	instream.close();
	return (0);
}
