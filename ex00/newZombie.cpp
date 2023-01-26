/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-camp <hde-camp@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 18:02:37 by hde-camp          #+#    #+#             */
/*   Updated: 2023/01/25 18:21:43 by hde-camp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "./Zombie.hpp"

Zombie *newZombie(std::string name)
{
	Zombie *zombie_ptr;

	zombie_ptr = new Zombie(name);
	return (zombie_ptr);
}