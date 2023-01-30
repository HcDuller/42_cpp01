/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-camp <hde-camp@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 14:44:36 by hde-camp          #+#    #+#             */
/*   Updated: 2023/01/30 18:39:44 by hde-camp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int main(void){
	Harl harl = Harl();

	std::cout << "Calling an invalid level.This should print nothing inside ->[";
	harl.complain("teste");
	std::cout << "]" << std::endl;
	std::cout << "Call to DEBUG" << std::endl;
	harl.complain("DEBUG");
	std::cout << "Call to INFO" << std::endl;
	harl.complain("INFO");
	std::cout << "Call to WARNING" << std::endl;
	harl.complain("WARNING");
	std::cout << "Call to ERROR" << std::endl;
	harl.complain("ERROR");
	return (0);
}