/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 01:02:35 by yosherau          #+#    #+#             */
/*   Updated: 2025/09/19 21:49:25 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string>

int	main(int argc, char *argv[])
{
	if (4 != argc)
	{
		std::cerr << "Invalid number of arguments provided" << std::endl;
		exit(EXIT_FAILURE);
	}

	std::string	fileName = argv[1];
	std::string	toFind = argv[2];
	std::string	toReplace = argv[3];

	std::ifstream	inputFile;
	inputFile.open(fileName, std::ios::in);
	if (!inputFile.is_open() || inputFile.peek() == EOF)
	{
		std::cerr << "File issue :D" << std::endl;
		exit(EXIT_FAILURE);
	}

	if (toFind.empty())
	{
		std::cerr << "Word to be replaced can't be empty!" << std::endl;
		exit(EXIT_FAILURE);
	}

	std::ofstream	outputFile(fileName + ".replace", std::ios::out);
	std::string		line;
	std::string		newLine;
	int				pos;
	size_t			foundPos;
	while (std::getline(inputFile, line))
	{
		pos = 0;
		newLine = "";
		while (true)
		{
			foundPos = line.find(toFind, pos);
			if (foundPos == std::string::npos)
				break;
			if (newLine.empty())
				newLine = line.substr(pos, foundPos - pos);
			else
				newLine += line.substr(pos, foundPos - pos);
			newLine += toReplace;
			pos = foundPos + toFind.length();
		}
		newLine += line.substr(pos, line.length() - pos);
		outputFile << newLine << std::endl;
	}
	inputFile.close();
	outputFile.close();
}