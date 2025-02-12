/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nponchon <nponchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 16:12:17 by nponchon          #+#    #+#             */
/*   Updated: 2025/02/12 16:57:41 by nponchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include <string>

class	HumanB {
	private:
		std::string name;
		Weapon *weapon;
	public:
		HumanB();
		HumanB( std::string str );
		~HumanB();
		void setWeapon( Weapon w );
		void attack();
};

#endif