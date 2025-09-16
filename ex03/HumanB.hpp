/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 12:56:49 by yosherau          #+#    #+#             */
/*   Updated: 2025/09/16 13:13:30 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

# include <string>
# include "Weapon.hpp"

class HumanB
{
	std::string	name;
	Weapon		*weapon = NULL;

	public:
		void		attack(void);
		void		setWeapon(Weapon &weapon);
		std::string	getName(void) const;
		HumanB(std::string name);
};

#endif