/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 23:53:42 by yosherau          #+#    #+#             */
/*   Updated: 2026/01/15 21:45:09 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <string>
# include <iostream>

class Zombie
{
	std::string	name;

	public:
		Zombie();
		Zombie(std::string name);
		~Zombie(void);
		void		announce(void);
		void		set_name(const std::string name);
		std::string	get_name(void) const;
};

Zombie	*zombieHorde(int N, std::string name);

#endif