/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 22:28:17 by geonwkim          #+#    #+#             */
/*   Updated: 2024/11/25 22:56:07 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(const std::string& name, Weapon& weapon)
	: _name(name), _weapon(weapon)
{
}

HumanA::~HumanA()
{
}

void HumanA::attack() const
{
	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}
