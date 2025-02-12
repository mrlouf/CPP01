/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nponchon <nponchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 15:23:08 by nponchon          #+#    #+#             */
/*   Updated: 2025/02/12 17:28:19 by nponchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string str ) : _type(str) {}

Weapon::~Weapon() {}

std::string Weapon::getType() {
	return _type;
}

void Weapon::setType( std::string weapon ) {
	_type = weapon;
}