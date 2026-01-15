/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 23:57:03 by yosherau          #+#    #+#             */
/*   Updated: 2026/01/15 15:12:59 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../include/Zombie.hpp"


Zombie::Zombie(std::string name):
	name(name)
{
	std::cout << "A Zombie has spawned 🧟" << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << this->get_name() << ": has perished 🗿" << std::endl;
}

std::string	Zombie::get_name(void)
{
	return (this->name);
}

void	Zombie::announce(void)
{
	std::cout << this->get_name() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
