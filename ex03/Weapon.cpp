/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 11:20:00 by yosherau          #+#    #+#             */
/*   Updated: 2025/09/16 13:08:29 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

#include <iostream>

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