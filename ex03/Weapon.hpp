/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nponchon <nponchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 15:27:58 by nponchon          #+#    #+#             */
/*   Updated: 2025/02/12 17:05:01 by nponchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class	Weapon {
	private:
		std::string type;
	public:
		Weapon();
		Weapon( std::string str );
		~Weapon();
		std::string getType();
		void setType( std::string weapon );
};