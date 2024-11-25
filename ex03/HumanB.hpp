/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 22:39:34 by geonwkim          #+#    #+#             */
/*   Updated: 2024/11/25 22:40:08 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
# include <string>

class HumanB
{
private:
	std::string _name;
	Weapon* _weapon;

public:
	HumanB(const std::string& name);
	~HumanB();

	void setWeapon(Weapon& weapon);
	void attack() const;
};

#endif
