/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 23:31:52 by geonwkim          #+#    #+#             */
/*   Updated: 2024/11/25 23:34:11 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void) {
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info(void) {
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void) {
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void) {
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level) {
	// Convert levels to an index for switch-case
	int levelIndex = -1;
	if (level == "DEBUG") levelIndex = 0;
	else if (level == "INFO") levelIndex = 1;
	else if (level == "WARNING") levelIndex = 2;
	else if (level == "ERROR") levelIndex = 3;

	switch (levelIndex) {
		case 0: // DEBUG
			debug();
			// Fall through to the next case intentionally
		case 1: // INFO
			info();
			// Fall through to the next case intentionally
		case 2: // WARNING
			warning();
			// Fall through to the next case intentionally
		case 3: // ERROR
			error();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}
