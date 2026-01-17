/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 16:47:44 by yosherau          #+#    #+#             */
/*   Updated: 2026/01/17 13:31:38 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/include.hpp"

int	main()
{
	std::string	brain = "HI THIS IS BRAIN";
	std::string	*brainPTR = &brain;
	std::string	&brainREF = brain;

	std::cout << std::left << std::setw(25) << "Memory Address: " << &brain << std::endl;
	std::cout << std::setw(25) << "Memory Adress of ptr: " << brainPTR << std::endl;
	std::cout << std::setw(25) << "Memory Address of ref: " << &brainREF << std::endl;

	std::cout << std::left << std::setw(25) << "Value of var: " << brain << std::endl;
	std::cout << std::setw(25) << "Value of ptr: " << *brainPTR << std::endl;
	std::cout << std::setw(25) << "Value of ref: " << brainREF << std::endl;
}