/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 14:02:49 by yosherau          #+#    #+#             */
/*   Updated: 2025/09/16 13:04:41 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
# include <iostream>

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