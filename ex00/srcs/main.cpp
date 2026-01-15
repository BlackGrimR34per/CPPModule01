/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 23:53:27 by yosherau          #+#    #+#             */
/*   Updated: 2026/01/15 21:42:31 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../include/Zombie.hpp"

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