/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-camp <hde-camp@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 14:58:45 by hde-camp          #+#    #+#             */
/*   Updated: 2023/01/26 15:34:53 by hde-camp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"
#include <string>
#include <iostream>


HumanA::HumanA(std::string name, Weapon& weapon): weapon(weapon),name(name){};
HumanA::~HumanA(){};
void HumanA::attack(){
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}
void HumanA::setWeapon(Weapon& weapon){
	this->weapon = weapon;
}
void HumanA::setName(std::string name){
	this->name = name;
}
// Weapon		weapon;
// std::string	name;