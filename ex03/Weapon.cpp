/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nponchon <nponchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 15:23:08 by nponchon          #+#    #+#             */
/*   Updated: 2025/02/12 16:52:06 by nponchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() {}

Weapon::Weapon( std::string str ) : type(str) {}

Weapon::~Weapon() {}

std::string Weapon::getType() {
	return type;
}

void Weapon::setType( std::string weapon ) {
	type = weapon;
}