/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 22:26:00 by geonwkim          #+#    #+#             */
/*   Updated: 2024/11/25 22:53:32 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string& type) : _type(type) {}

const std::string& Weapon::getType() const
{
	return (_type);
}

void Weapon::setType(const std::string& newType)
{
	_type = newType;
}
