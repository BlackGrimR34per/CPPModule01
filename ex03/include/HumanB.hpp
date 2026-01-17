/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 12:56:49 by yosherau          #+#    #+#             */
/*   Updated: 2026/01/17 13:35:53 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <string>
# include <iostream>
# include "Weapon.hpp"

class HumanB
{
	std::string	name;
	Weapon		*weapon;

	public:
		void		attack(void);
		void		setWeapon(Weapon &weapon);
		std::string	getName(void) const;
		HumanB(std::string name);
};

#endif