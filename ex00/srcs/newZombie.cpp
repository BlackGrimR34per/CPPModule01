/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 13:52:51 by yosherau          #+#    #+#             */
/*   Updated: 2026/01/15 15:13:18 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../include/Zombie.hpp"

Zombie	*newZombie(std::string name)
{
	Zombie	*newZombie = new Zombie(name);
	return (newZombie);
}
