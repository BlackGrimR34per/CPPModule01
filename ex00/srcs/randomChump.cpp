/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 14:30:38 by yosherau          #+#    #+#             */
/*   Updated: 2026/01/15 15:13:10 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../include/Zombie.hpp"

void	randomChump(std::string name)
{
	Zombie	randomChump(name);
	randomChump.announce();
}