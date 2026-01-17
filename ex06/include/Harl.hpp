/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 22:14:25 by yosherau          #+#    #+#             */
/*   Updated: 2026/01/17 13:35:07 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <string>
# include <iostream>
# include <stdlib.h>

# define DEBUG_STR "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!"
# define INFO_STR "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"
# define WARNING_STR "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."
# define ERROR_STR "This is unacceptable! I want to speak to the manager now."

class Harl
{
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
	typedef void	(Harl::* harlFuncs)(void);
	harlFuncs	fu[4];
	std::string	levels[4];

	public:
		Harl();
		~Harl();
		void	complain(std::string level);
};

#endif