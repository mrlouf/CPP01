/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nponchon <nponchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 16:10:00 by nponchon          #+#    #+#             */
/*   Updated: 2025/02/12 17:02:23 by nponchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string str, Weapon weap ) : name(str), weapon(weap) {
}

HumanA::~HumanA() {}

void	HumanA::attack() {
	std::cout << name << "attacks with " << std::endl;
}