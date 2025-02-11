/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nponchon <nponchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 13:16:55 by nponchon          #+#    #+#             */
/*   Updated: 2025/02/11 15:00:24 by nponchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Default Constructor
Zombie::Zombie() {}

// Constructor with name, calling announce()
Zombie::Zombie(std::string str) : name(str) {
	;
}

// Default Destructor
Zombie::~Zombie() {
	std::cout << name << " has gone to Zombie's paradise" << std::endl;
}

// Prints Zombie's name and the announcement
void	Zombie::announce( void ) {
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}