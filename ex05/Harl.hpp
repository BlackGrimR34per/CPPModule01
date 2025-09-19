/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 22:14:25 by yosherau          #+#    #+#             */
/*   Updated: 2025/09/19 22:33:51 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
# define HARL_H

# include <string>
# include <iostream>

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

	public:
		void	complain(std::string level);
};

#endif