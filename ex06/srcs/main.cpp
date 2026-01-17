/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 18:12:47 by yosherau          #+#    #+#             */
/*   Updated: 2026/01/17 13:23:05 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Harl.hpp"

int	main(int argc, char *argv[])
{
	Harl		harl;
	std::string	input;

	if (argc != 2)
	{
		std::cerr << "Harl has complained there's not enough arguments" << std::endl;
		return (EXIT_FAILURE);
	}
	input = argv[1];
	harl.complain(input);
}
