/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-camp <hde-camp@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 14:44:36 by hde-camp          #+#    #+#             */
/*   Updated: 2023/01/30 16:30:01 by hde-camp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int main(int argc, char *argv[]){
	Harl harl = Harl();

	if (argc != 2)
	{
		std::cout << "Harl can't deal with this." << std::endl;
		return (-1);
	}
	harl.set_capacity(argv[1]);
	std::cout << "This should print nothing [";
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