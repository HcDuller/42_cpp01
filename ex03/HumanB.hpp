/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-camp <hde-camp@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 15:13:30 by hde-camp          #+#    #+#             */
/*   Updated: 2023/01/26 16:33:30 by hde-camp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Weapon.hpp"
#include <string>

class HumanB
{
private:
	Weapon*		weapon;
	std::string	name;
	HumanB();
public:
	HumanB(std::string name);
	~HumanB();
	void		setWeapon(Weapon& weapon);
	void		setName(std::string name);
	void		attack();
};
