/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 11:20:00 by yosherau          #+#    #+#             */
/*   Updated: 2026/01/17 12:59:24 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Weapon.hpp"

Weapon::Weapon(std::string type):
	type(type)
{
	std::cout << "Weapon has been constructed" << std::endl;
}

const std::string	&Weapon::getType(void) const
{
	return (this->type);
}

void	Weapon::setType(const std::string type)
{
	this->type = type;
}