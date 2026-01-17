/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 14:02:49 by yosherau          #+#    #+#             */
/*   Updated: 2026/01/17 12:58:54 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon):
	name(name), weapon(weapon)
{
	std::cout << "HumanA was constructed" << std::endl;
}

void	HumanA::attack(void)
{
	std::cout << getName() << " attacks with thier " << this->weapon.getType() << std::endl;
}

std::string	HumanA::getName(void) const
{
	return (this->name);
}