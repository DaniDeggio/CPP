/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-giov <dde-giov@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 16:13:40 by dde-giov          #+#    #+#             */
/*   Updated: 2024/06/05 16:48:54 by dde-giov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phone.hpp"

void	add(){
	return ;
}

void	search(){
	return ;
}

int main(){
	PhoneBook   phonebook;
	std::string command;
	std::cout << "Command: ADD, SEARCH, EXIT" << std::endl;
	while(42)
		std::getline(std::cin, command);
		//command = command.substr(0, command.find(' '));
		command.erase(0, command.find_first_not_of(" \t\v\f\r"));
		while (isspace(command[command.length() - 1]))
            command.erase(command.find_last_not_of(" \t\v\r\f") + 1, command[command.length() - 1]);
		if (command == "ADD")
			add();
		else if (command == "SEARCH")
			search();
		else if (command == "EXIT")
			return 0;
		else
			std::cout << "Invalid command" << std::endl;
	return 0;
}