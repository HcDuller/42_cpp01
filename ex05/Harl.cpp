/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-camp <hde-camp@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 23:26:13 by hde-camp          #+#    #+#             */
/*   Updated: 2023/01/30 15:57:47 by hde-camp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Harl.hpp"
#include <string>
#include <iostream>

Harl::Harl(){
	fnVector[0] = &Harl::debug;
	fnVector[1] = &Harl::info;
	fnVector[2] = &Harl::warning;
	fnVector[3] = &Harl::error;
	levels[0] = "DEBUG";
	levels[1] = "INFO";
	levels[2] = "WARNING";
	levels[3] = "ERROR";
}
Harl::~Harl(){};
void Harl::debug(void){
	std::cout << "This is a message issued by Harl-Debugger:" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-";
	std::cout << "triple-pickle-special-ketchup burger. I really do!";
	std::cout << std::endl;
}
void Harl::info(void){
	std::cout << "This is a message issued by Harl-Info:" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money.";
	std::cout << " You didn’t put enough bacon in my burger!";
	std::cout << " If you did, I wouldn’t be asking for more!";
	std::cout << std::endl;
}
void Harl::warning(void){
	std::cout << "This is a message issued by Harl-Warning:" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. ";
	std::cout << "I’ve been coming for years whereas you started working here since last month.";
	std::cout << std::endl;
}
void Harl::error(void){
	std::cout << "This is a message issued by Harl-Error:" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now.";
	std::cout << std::endl;
}

void Harl::complain(std::string level){
	int	l_counter = 0;

	while (l_counter < 4)
	{
		if ((this->levels[l_counter]).compare(level) == 0)
		{
			(this->*fnVector[l_counter])();
			break;
		}
		l_counter++;
	}
}
