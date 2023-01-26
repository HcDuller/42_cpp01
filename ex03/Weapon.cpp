/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-camp <hde-camp@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 14:35:55 by hde-camp          #+#    #+#             */
/*   Updated: 2023/01/26 14:38:26 by hde-camp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "./Weapon.hpp"

std::string& Weapon::getType(){
	std::string& typeRef = this->_type;
	return (typeRef);
}
void Weapon::setType(std::string newType){
	this->_type = newType;
}
Weapon::Weapon(){};
Weapon::~Weapon(){};
