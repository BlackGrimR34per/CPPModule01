/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 23:57:03 by yosherau          #+#    #+#             */
/*   Updated: 2025/09/12 16:32:04 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./Zombie.hpp"

# include <iostream>

Zombie::Zombie(void)
{
	std::cout << "Default constructor called" << std::endl;
}

Zombie::Zombie(std::string name):
	name(name)
{
	std::cout << "A Zombie has spawned 🧟" << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << this->get_name() << ": has perished 🗿" << std::endl;
}

std::string	Zombie::get_name(void) const
{
	return (this->name);
}

void	Zombie::announce(void)
{
	std::cout << this->get_name() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::set_name(const std::string name)
{
	this->name = name;
}