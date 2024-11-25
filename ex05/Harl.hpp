/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 23:14:10 by geonwkim          #+#    #+#             */
/*   Updated: 2024/11/25 23:27:08 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <string>
# include <iostream>

class Harl
{
private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);

	typedef void (Harl::*HarlComplaint)();
	static const std::string levels[4];
	static const HarlComplaint complaints[4];

public:
	Harl();
	~Harl();

	void complain(std::string level);
};

#endif
