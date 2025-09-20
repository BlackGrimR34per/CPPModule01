/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 22:15:37 by yosherau          #+#    #+#             */
/*   Updated: 2025/09/20 18:57:57 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	fu[0] = &Harl::debug;
	fu[1] = &Harl::info;
	fu[2] = &Harl::warning;
	fu[3] = &Harl::error;
	std::cout << "Harl has spawned" << std::endl;
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

void	Harl::complain(std::string level)
{
	for (int index = 0; index < 4; index++)
	{
		if (level == this->levels[index])
		{
			switch (index)
			{
				case 0:
					this->debug();
				case 1:
					this->error();
				case 2:
					this->warning();
				case 3:
					this->error();
			}
		}
	}
}