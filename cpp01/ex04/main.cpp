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
	if (line.find(s1) == std::string::npos)
		return (line);
	while (pos = line.find(s1, pos) != std::string::npos) {
	new_line.append(line, pos)
}
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
	sts::ofsteeam Output(File2);

	if (!Input.is_open() || !Output.is_open()){
		std::cout << "Error while opening the file: " << File << std::endl;
		return (1);
		}
	while (std::getline(Input, line)){
		Output << replacer(line, s1, s2) << std::endl;
	}
	Output.close();
	input.close();
}