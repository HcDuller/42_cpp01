/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-camp <hde-camp@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 20:30:05 by hde-camp          #+#    #+#             */
/*   Updated: 2023/01/25 20:42:42 by hde-camp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(void){
	std::string		strVar = "HI THIS IS BRAIN";
	std::string*	strPtr = &strVar;
	std::string&	strRef = strVar;

	std::cout << "Memory address of strVar      [" << &strVar << "]" << std::endl;
	std::cout << "Memory address held by strPtr [" << strPtr << "]" << std::endl;
	std::cout << "Memory address held by strRef [" << &strRef << "]" << std::endl << std::endl;
	
	std::cout << "Value of strVar        [" << strVar << "]" << std::endl;
	std::cout << "Value pointed by strPtr[" << *strPtr << "]" << std::endl;
	std::cout << "Value pointed by strRef[" << strRef << "]" << std::endl;
	return (0);
}