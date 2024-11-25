/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 23:22:08 by geonwkim          #+#    #+#             */
/*   Updated: 2024/11/25 23:22:47 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl harl;

	std::cout << "DEBUG level:" << std::endl;
	harl.complain("DEBUG");

	std::cout << "\nINFO level:" << std::endl;
	harl.complain("INFO");

	std::cout << "\nWARNING level:" << std::endl;
	harl.complain("WARNING");

	std::cout << "\nERROR level:" << std::endl;
	harl.complain("ERROR");

	std::cout << "\nUNKNOWN level:" << std::endl;
	harl.complain("RANDOM");

	return 0;
}