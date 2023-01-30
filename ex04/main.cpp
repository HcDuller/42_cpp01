/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-camp <hde-camp@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 22:13:16 by hde-camp          #+#    #+#             */
/*   Updated: 2023/01/30 18:02:01 by hde-camp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

void	sedIsForLoosers(std::string& str, std::string& s1, std::string& s2);

int main(int argc,char *argv[]){
	if (argc < 4)
	{
		std::cout << "Insufficient parameters" << std::endl;
		return (-1);
	}
	if (argc > 4)
	{
		std::cout << "Excessive parameters" << std::endl;
	}
	std::string s1,s2;
	std::string filename;
	std::string file_content;
	std::ostringstream ss;
	std::ifstream reader;
	std::ofstream writer;

	filename = argv[1];
	filename += ".replace";
	s1 = argv[2];
	s2 = argv[3];
	reader.open(argv[1], std::ios_base::in);
	if (!reader.good() || reader.bad())
	{
		std::cout << "Could not open file " << argv[1] << std::endl;
		return (-1);
	}
	writer.open(filename.c_str(), std::ios_base::trunc | std::ios_base::out);
	if (writer.bad() || !writer.good())
	{
		std::cout << "Could not open file " << filename << std::endl;
		reader.close();
		return (-1);
	}
	ss << reader.rdbuf();
	file_content = ss.str();
	sedIsForLoosers(file_content, s1, s2);
	writer << file_content;
	reader.close();
	writer.close();
	return (0);
}