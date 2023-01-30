/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-camp <hde-camp@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 14:55:38 by hde-camp          #+#    #+#             */
/*   Updated: 2023/01/26 15:34:23 by hde-camp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Weapon.hpp"
#include <string>

class HumanA
{
private:
	Weapon&		weapon;
	std::string	name;
	HumanA();
public:
	HumanA(std::string name, Weapon& weapon);
	~HumanA();
	void		setWeapon(Weapon& weapon);
	void		setName(std::string name);
	void		attack();

};
