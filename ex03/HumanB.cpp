/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nponchon <nponchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 16:17:40 by nponchon          #+#    #+#             */
/*   Updated: 2025/02/12 16:55:59 by nponchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB() {}

HumanB::HumanB( std::string str ) : name(str) {}

HumanB::~HumanB() {}

void	HumanB::setWeapon( Weapon w ) {
	weapon = &w;
}

void	HumanB::attack() {
	if (!weapon)
		std::cout << name << " attacks with his bare fists!" << std::endl;
	else
		std::cout << name << " attacks with" << weapon << std::endl;
}