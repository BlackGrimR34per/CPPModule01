/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 23:53:27 by yosherau          #+#    #+#             */
/*   Updated: 2025/09/12 14:47:55 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <stdio.h>

int	main()
{
	Zombie	stackZombie("Yohen");
	stackZombie.announce();
	Zombie	*heapZombie = newZombie("Sheraun");
	heapZombie->announce();
	randomChump("Yogi");
	delete heapZombie;
	return (EXIT_SUCCESS);
}