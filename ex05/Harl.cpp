/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 23:15:40 by geonwkim          #+#    #+#             */
/*   Updated: 2024/11/25 23:27:20 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

// Define the levels and their corresponding member functions pointers
const std::string Harl::levels[4] = {
	"DEBUG",
	"INFO",
	"WARNING",
	"ERROR"
};

const Harl::HarlComplaint Harl::complaints[4] = {
	&Harl::debug,
	&Harl::info,
	&Harl::warning,
	&Harl::error
};

Harl::Harl() {}
Harl::~Harl() {}

void Harl::debug(void)
{
	std::cout << "[DEBUG] I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
	std::cout << "[INFO] I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "[WARNING] I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
	std::cout << "[WARNING] I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::complain(std::string level)
{
	for (size_t i = 0; i < 4; i++) {
		if (levels[i] == level) {
			(this->*complaints[i])();
			return ;
		}
	}
	std::cout << "[UNKNOWN] Harl doesn't recognize this complaint level!" << std::endl;
}
