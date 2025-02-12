/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nponchon <nponchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 17:54:56 by nponchon          #+#    #+#             */
/*   Updated: 2025/02/12 18:16:39 by nponchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int	main(int ac, char **av) {
	
	if (ac != 4) {
		std::cout << "Usage: ./SedIsForLosers <filename> <s1> <s2>" << std::endl;
		return (1);
	}

    std::string filename = av[1];
    std::ifstream inputFile(filename);

    if (!inputFile.is_open()) {
        std::cerr << "Error: Could not open file " << filename << std::endl;
        return (1);
    }

    /*
		TODO
		- Read the file
		- Check for matches
		- Replace matches, advance the buffer to the end of the replaced match
	*/

    inputFile.close();
    return (0);
}