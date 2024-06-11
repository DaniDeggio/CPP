/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-giov <dde-giov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 16:13:40 by dde-giov          #+#    #+#             */
/*   Updated: 2024/06/11 18:07:27 by dde-giov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phone.hpp"

void question(int n){
 if (n == 0)
		std::cout << "Type the Frist Name:" << std::endl;
if (n == 1)
		std::cout << "Type the Last Name:" << std::endl;
if (n == 2)
		std::cout << "Type the NickName:" << std::endl;
if (n == 3)
		std::cout << "Type the Phonenumber:" << std::endl;
if (n == 4)
		std::cout << "Type the Darkest Secret:" << std::endl;
}

int check_answare(std::string answare, int n){
	answare.erase(0, answare.find_first_not_of(" \t\v\f\r"));
		while (isspace(answare[answare.length() - 1]))
            answare.erase(answare.find_last_not_of(" \t\v\r\f") + 1, answare[answare.length() - 1]);
	if (answare.empty())
		return (1);
	if (n == 3)
		return (0); 	//controllare numeri
	return (0);
}

void	add(){
		int n = 0;
		std::string answare;

	while (n < 5) {
	question(n);
			std::getline(std::cin, answare);
 if (!check_answare(answare, n))
			n++;
	else
			std::cout << "Invalid field" << std::endl;
	}
	std::cout << "Added successfully!" << std::endl;
}

void	search(){
	return ;
}

int main(){
	PhoneBook   phonebook;
	std::string command;
	while(42){
 	std::cout << std::endl << "Type a command: ADD, SEARCH, EXIT" << std::endl;
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
			break ;
		else
			std::cout << "Invalid command" << std::endl;
}
	return 0;
}