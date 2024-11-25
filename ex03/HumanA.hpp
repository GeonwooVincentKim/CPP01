/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 22:27:06 by geonwkim          #+#    #+#             */
/*   Updated: 2024/11/25 22:43:25 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <string>
#include "Weapon.hpp"

class HumanA
{
private:
	std::string _name;
	Weapon& _weapon;

public:
	HumanA(const std::string& name, Weapon& weapon);
	~HumanA();

	void attack() const;	
};

#endif
