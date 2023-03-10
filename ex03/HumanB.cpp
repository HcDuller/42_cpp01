/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-camp <hde-camp@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 16:14:44 by hde-camp          #+#    #+#             */
/*   Updated: 2023/01/26 16:35:10 by hde-camp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"
#include <string>
#include <iostream>


HumanB::HumanB(std::string name): weapon(NULL), name(name){};
HumanB::~HumanB(){};
void HumanB::attack(){
	std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}
void HumanB::setWeapon(Weapon& weapon){
	this->weapon = (Weapon*)&weapon;
}
void HumanB::setName(std::string name){
	this->name = name;
}