/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-camp <hde-camp@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 14:22:43 by hde-camp          #+#    #+#             */
/*   Updated: 2023/01/26 14:35:51 by hde-camp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class Weapon
{
private:
	std::string _type;
public:
	std::string&	getType();
	void			setType(std::string newType);
	Weapon();
	~Weapon();
};