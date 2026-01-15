/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 23:53:42 by yosherau          #+#    #+#             */
/*   Updated: 2026/01/15 21:40:42 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <string>
# include <stdlib.h>
# include <iostream>

class Zombie
{
	std::string	name;

	public:
		Zombie(std::string name);
		~Zombie(void);
		void		announce(void);
		std::string	get_name(void);
};

Zombie		*newZombie(std::string name);
void		randomChump(std::string name);

#endif