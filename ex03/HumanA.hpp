/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nponchon <nponchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 15:37:52 by nponchon          #+#    #+#             */
/*   Updated: 2025/02/12 17:05:36 by nponchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include <string>

class	HumanA {
	private:
		std::string	name;
		Weapon &weapon;
	public:
		HumanA( std::string str, Weapon weapon );
		~HumanA();
		void attack();
};

#endif