/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nponchon <nponchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 15:11:22 by nponchon          #+#    #+#             */
/*   Updated: 2025/02/11 15:43:51 by nponchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <sstream>
#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int	main(int ac, char **av)
{

	if (ac != 3)
	{
		std::cout << "Usage: ./MoarBrainz! <Number of Zombies> <Name>" << std::endl;
		return (1);
	}
	
    std::istringstream iss(av[1]);
    int N;
    if (!(iss >> N))
    {
        std::cerr << "Invalid number: " << av[1] << std::endl;
        return 1;
    }
	std::string name = av[2];

	Zombie *horde = zombieHorde(N, name);

	horde[1].announce();

	delete[] horde;

	return (0);
}