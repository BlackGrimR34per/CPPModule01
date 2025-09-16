/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 12:56:38 by yosherau          #+#    #+#             */
/*   Updated: 2025/09/16 13:26:53 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

# include <iostream>

HumanB::HumanB(std::string name):
	name(name)
{
	std::cout << "HumanB was created" << std::endl;
}

void	HumanB::attack(void)
{
	if (!this->weapon)
		std::cout << getName() << " has nothing to attack with 🗿";
	else
		std::cout << getName() << " attacks with their " << this->weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}

std::string	HumanB::getName(void) const
{
	return (this->name);
}

