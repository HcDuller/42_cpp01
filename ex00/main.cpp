/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-camp <hde-camp@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 17:48:04 by hde-camp          #+#    #+#             */
/*   Updated: 2023/01/25 18:34:13 by hde-camp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "./Zombie.hpp"

Zombie* newZombie( std::string name );
void randomChump( std::string name );

int main(void){
	Zombie *heap_zombie;

	heap_zombie = newZombie("Heap_Zombie");
	randomChump("Stack_Zombie");
	heap_zombie->announce();
	delete heap_zombie;
	return (0);
}
