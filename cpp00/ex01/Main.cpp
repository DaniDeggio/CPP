/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-giov <dde-giov@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 16:13:40 by dde-giov          #+#    #+#             */
/*   Updated: 2024/06/17 02:24:32 by dde-giov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phone.hpp"

void	add(PhoneBook &phonebook){
	int n = 0;
	std::string answare;

	while (n < 5) {
		question(n);
		std::getline(std::cin, answare);
		if (!check_answare(answare, n))
		{
			add_newcontact(phonebook, answare, n);
			n++;
		}
		else
				std::cout << "Invalid field" << std::endl;
	}
	std::cout << "Added successfully!" << std::endl;
}

void	print_table(PhoneBook phonebook){
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	for (int i = 0; i < 8; i++){
		if (phonebook.print_info(i))
			break ;
	}
}

void	search(PhoneBook phonebook){
	print_table(phonebook);
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
			add(phonebook);
		else if (command == "SEARCH")
			search(phonebook);
		else if (command == "EXIT")
			break ;
		else
			std::cout << "Invalid command" << std::endl;
}
	return 0;
}