/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-camp <hde-camp@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 18:39:46 by hde-camp          #+#    #+#             */
/*   Updated: 2023/01/25 19:09:01 by hde-camp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"
#include <string>
Zombie* zombieHorde( int N, std::string name ){
	Zombie *horde = new Zombie[N];
	int i = 0;

	while (i < N){
		horde[i].setName(name);
		i++;
	}
	return (horde);
}