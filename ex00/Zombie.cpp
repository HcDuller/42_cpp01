/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-camp <hde-camp@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 17:35:18 by hde-camp          #+#    #+#             */
/*   Updated: 2023/01/25 18:00:40 by hde-camp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string name): _name(name){};
Zombie::Zombie(){};
Zombie::~Zombie(){
	std::cout << this->_name << " died." << std::endl;
};
void Zombie::announce(void){
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." <<  std::endl;
}