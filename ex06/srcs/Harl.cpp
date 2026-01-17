/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 22:15:37 by yosherau          #+#    #+#             */
/*   Updated: 2026/01/17 13:22:55 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Harl.hpp"

Harl::Harl()
{
	levels[0] = "DEBUG";
	levels[1] = "INFO";
	levels[2] = "WARNING";
	levels[3] = "ERROR";
	fu[0] = &Harl::debug;
	fu[1] = &Harl::info;
	fu[2] = &Harl::warning;
	fu[3] = &Harl::error;
	std::cout << "Harl has spawned" << std::endl;
}

Harl::~Harl()
{
	std::cout << "Harl has despawned" << std::endl;
}

void	Harl::debug(void)
{
	std::cout << DEBUG_STR << std::endl;
}

void	Harl::info(void)
{
	std::cout << INFO_STR << std::endl;
}

void	Harl::warning(void)
{
	std::cout << WARNING_STR << std::endl;
}

void	Harl::error(void)
{
	std::cout << ERROR_STR << std::endl;
}

// Not proper for IRL code me thinks
void	Harl::complain(std::string level)
{
	int	index;

	if (level.empty())
	{
		std::cout << "Level provided is empty!" << std::endl;
		return ;
	}

	for (index = 0; index < 4; index++)
	{
		if (level == this->levels[index])
			break;
	}
	switch (index)
	{
		case 0:
			this->debug();
		case 1:
			this->info();
		case 2:
			this->warning();
		case 3:
			this->error();
			break;
		default:
			std::cout << "Probably complaining about insignificant problems" << std::endl;
	}
}