/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-camp <hde-camp@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 23:26:02 by hde-camp          #+#    #+#             */
/*   Updated: 2023/01/30 16:15:20 by hde-camp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>

class Harl
{
public:
	typedef void (Harl::*complainer)(void);
private:
	void debug(void);
	void error(void);
	void info(void);
	void warning(void);
	Harl::complainer fnVector[4];
	std::string levels[4];
	int	complain_capacity;
public:
	Harl();
	~Harl();
	void complain(std::string level);
	void set_capacity(std::string input);
};