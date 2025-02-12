/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nponchon <nponchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 15:27:58 by nponchon          #+#    #+#             */
/*   Updated: 2025/02/12 17:30:43 by nponchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>

class	Weapon {
	private:
		std::string _type;
	public:
		Weapon( std::string str );
		~Weapon();
		std::string getType();
		void setType( std::string weapon );
};

#endif