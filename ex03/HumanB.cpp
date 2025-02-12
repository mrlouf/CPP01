/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nponchon <nponchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 16:17:40 by nponchon          #+#    #+#             */
/*   Updated: 2025/02/12 17:50:46 by nponchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB() {}

HumanB::HumanB( std::string str ) : _name(str), _weapon(NULL) {}

HumanB::~HumanB() {}

void	HumanB::setWeapon( Weapon &weapon ) {
	_weapon = &weapon;
}

void	HumanB::attack() {
	if (!_weapon)
		std::cout << _name << " attacks with his bare fists!" << std::endl;
	else
		std::cout << _name << " attacks with " << _weapon->getType() << std::endl;
}