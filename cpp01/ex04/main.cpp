/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-giov <dde-giov@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 13:44:00 by dde-giov          #+#    #+#             */
/*   Updated: 2024/06/19 13:48:55 by dde-giov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replacer.hpp"

std::string replacer(std::string line, std::string s1, std::string s2){
	std::string new_line;
	size_t pos = 0;
	size_t old_pos = 0;

	while ((pos = line.find(s1, old_pos)) != std::string::npos) {
	new_line.append(line, old_pos, pos - old_pos);
	new_line.append(s2);
	old_pos = pos + s1.length();
}
	new_line.append(line, old_pos, line.size() - old_pos);
	return (new_line);
}

int main(int ac, char **av){
	if (ac != 4) {
		std::cout << "Invalid parameters" << std::endl;
		return (1);
	}
	std::string File(av[1]);
	std::string s1(av[2]);
	std::string s2(av[3]);
	std::string line;
	std::string File2 = File;
	File2.append(".replace");

	std::ifstream Input(File);
	if (!Input.is_open()){
		std::cout << "Error while opening the file: " << File << std::endl;
		return (1);
	}
	std::ofstream Output(File2);
	if (!Output.is_open()){
		std::cout << "Error while creating the file: " << File << std::endl;
		return (1);
	}
	while (std::getline(Input, line)){
		Output << replacer(line, s1, s2) << std::endl;
	}
	Output.close();
	Input.close();
}