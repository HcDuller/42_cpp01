/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-camp <hde-camp@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 17:48:04 by hde-camp          #+#    #+#             */
/*   Updated: 2023/01/25 19:48:24 by hde-camp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "./Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int main(void){
	Zombie *horde;
	int i = 0;
	int hordeSize = 8;

	horde = zombieHorde(hordeSize, "Antedeguemon");
	while (i < hordeSize)
	{
		std::cout << "Announce zombie [" << i << "]" << std::endl;
		horde[i].announce();
		i++;
	}
	delete[] horde;
	return (0);
}
