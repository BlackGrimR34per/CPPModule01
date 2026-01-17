/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 14:00:33 by yosherau          #+#    #+#             */
/*   Updated: 2026/01/17 13:36:00 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <string>
# include <iostream>
# include "Weapon.hpp"

class HumanA
{
	std::string	name;
	Weapon		&weapon;

	public:
		void		attack(void);
		std::string	getName(void) const;
		HumanA(std::string name, Weapon &weapon);
};

#endif