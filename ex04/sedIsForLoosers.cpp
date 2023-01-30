/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sedIsForLoosers.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-camp <hde-camp@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 17:36:19 by hde-camp          #+#    #+#             */
/*   Updated: 2023/01/30 17:36:38 by hde-camp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

void	sedIsForLoosers(std::string& str, std::string& s1, std::string& s2){
	size_t pos_ini = 0;
	size_t pos_found = 0;
	size_t cpy_len = 0;
	size_t s1_len = s1.length();
	std::string temp = "";

	pos_found = str.find(s1);
	while (pos_found != std::string::npos)
	{
		cpy_len = pos_found - pos_ini;
		temp += str.substr(pos_ini, cpy_len);
		temp += s2;
		pos_ini = pos_ini + cpy_len + s1_len;
		pos_found = str.find(s1, pos_ini);
	}
	temp += str.substr(pos_ini, std::string::npos);
	str = temp;
}