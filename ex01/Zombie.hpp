/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-camp <hde-camp@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 17:33:12 by hde-camp          #+#    #+#             */
/*   Updated: 2023/01/25 19:07:10 by hde-camp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
class Zombie
{
private:
	std::string _name;
public:
	Zombie(std::string name);
	Zombie();
	~Zombie();
	std::string getName();
	void setName(std::string name);
	void announce(void);
};