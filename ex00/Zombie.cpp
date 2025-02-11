/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nponchon <nponchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 13:16:55 by nponchon          #+#    #+#             */
/*   Updated: 2025/02/11 13:39:49 by nponchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Default Constructor
Zombie::Zombie() {}

// Constructor with name
Zombie::Zombie(std::string str) : name(str) {
	announce();
}

// Default Destructor
Zombie::~Zombie() {}

void	Zombie::announce( void ) {
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}