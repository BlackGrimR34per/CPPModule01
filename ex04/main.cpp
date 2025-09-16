/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 01:02:35 by yosherau          #+#    #+#             */
/*   Updated: 2025/09/17 01:32:23 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string>

int	main(int argc, char *argv[])
{
	std::string	fileName = argv[1];
	std::string	to_find = argv[2];
	std::string	to_replace = argv[3];

	if (4 != argc)
	{
		std::cerr << "Invalid number of arguments provided" << std::endl;
		exit(EXIT_FAILURE);
	}
	std::ifstream	inputFile;
	inputFile.open(fileName, std::ios::in);
	if (!inputFile.is_open())
	{
		std::cerr << "File couldn't be opened" << std::endl;
		exit(EXIT_FAILURE);
	}
	std::ofstream	outputFile(fileName + ".replace", std::ios::out);
	std::string		line;
	int				pos;
	int				found_pos;
	while (true)
	{
		std::getline(inputFile, line);

		// pos = 0;
		// found_pos = line.find(to_find, pos);
		// if (found_pos != std::string::npos)
		std::cout << line << std::endl;
	}
	inputFile.close();
	outputFile.close();
}