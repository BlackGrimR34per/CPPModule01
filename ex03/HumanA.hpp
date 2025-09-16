/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 14:00:33 by yosherau          #+#    #+#             */
/*   Updated: 2025/09/16 13:04:50 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

# include <string>
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