/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-camp <hde-camp@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 18:04:35 by hde-camp          #+#    #+#             */
/*   Updated: 2023/01/25 18:21:39 by hde-camp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "./Zombie.hpp"

void randomChump(std::string name)
{
	Zombie local_zombie = Zombie(name);
	local_zombie.announce();
}
