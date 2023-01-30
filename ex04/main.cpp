/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-camp <hde-camp@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 22:13:16 by hde-camp          #+#    #+#             */
/*   Updated: 2023/01/27 23:24:22 by hde-camp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

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
	std::cout << filename <<std::endl;
	std::cout <<argv[2] <<std::endl;
	std::cout <<argv[3] <<std::endl;
	reader.open(argv[1], std::ios_base::in);
	if (reader.bad())
		return (-1);
	writer.open(filename.c_str(), std::ios_base::trunc | std::ios_base::out);
	if (writer.bad())
	{
		reader.close();
		return (-1);
	}
	
	if (reader.good() && writer.good())
	{
		ss << reader.rdbuf();
		file_content = ss.str();
		sedIsForLoosers(file_content, s1, s2);
		writer << file_content;
		reader.close();
		writer.close();
	}
	return (0);
}