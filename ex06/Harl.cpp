/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-camp <hde-camp@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 23:26:13 by hde-camp          #+#    #+#             */
/*   Updated: 2023/01/30 18:42:37 by hde-camp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Harl.hpp"
#include <string>
#include <iostream>

Harl::Harl()
{
	fnVector[0] = &Harl::error;
	fnVector[1] = &Harl::warning;
	fnVector[2] = &Harl::info;
	fnVector[3] = &Harl::debug;
	levels[0] = "ERROR";
	levels[1] = "WARNING";
	levels[2] = "INFO";
	levels[3] = "DEBUG";
	complain_capacity = 3;
}
Harl::~Harl(){};
void Harl::set_capacity(std::string input)
{
	int level = 0;
	while (level < 4)
	{
		if (this->levels[level].compare(input) == 0)
		{
			this->complain_capacity = level;
			return;
		}
		level++;
	}
	this->complain_capacity = -1;
}
void Harl::debug(void)
{
	std::cout << "This is a message issued by Harl-Debugger:" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-";
	std::cout << "triple-pickle-special-ketchup burger. I really do!";
	std::cout << std::endl;
}
void Harl::info(void)
{
	std::cout << "This is a message issued by Harl-Info:" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money.";
	std::cout << " You didn’t put enough bacon in my burger!";
	std::cout << " If you did, I wouldn’t be asking for more!";
	std::cout << std::endl;
}
void Harl::warning(void)
{
	std::cout << "This is a message issued by Harl-Warning:" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. ";
	std::cout << "I’ve been coming for years whereas you started working here since last month.";
	std::cout << std::endl;
}
void Harl::error(void)
{
	std::cout << "This is a message issued by Harl-Error:" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now.";
	std::cout << std::endl;
}

void Harl::complain(std::string level)
{
	int l_counter = 0;

	while (l_counter <= this->complain_capacity)
	{
		if ((this->levels[l_counter]).compare(level) == 0)
		{
			break;
		}
		l_counter++;
	}
	if (l_counter > this->complain_capacity)
		return;
	switch (l_counter)
	{
	case -1:
		break;
	case 0:
		(this->*fnVector[0])();
		break;
	case 1:
		(this->*fnVector[1])();
		break;
	case 2:
		(this->*fnVector[2])();
		break;
	case 3:
		(this->*fnVector[3])();
		break;
	default:
		break;
	}
}
