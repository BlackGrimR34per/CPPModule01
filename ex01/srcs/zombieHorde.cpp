/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 16:21:02 by yosherau          #+#    #+#             */
/*   Updated: 2026/01/15 21:44:51 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie	*zombieHorde = new Zombie[N];
	for (int index = 0; index < N; index++)
		zombieHorde[index].set_name(name);
	return (zombieHorde);
}