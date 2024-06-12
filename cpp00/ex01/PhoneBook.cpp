/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-giov <dde-giov@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 16:29:03 by dde-giov          #+#    #+#             */
/*   Updated: 2024/06/12 05:43:31 by dde-giov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){
	return ;
}

PhoneBook::~PhoneBook(){
	return ;
}

void PhoneBook::slide_contacts(PhoneBook *pb){
	int i = 7;

	while(i > 0){
		pb->Contacts[i] = pb->Contacts[i - 1];
		i--;
	}
}

void	PhoneBook::add_contact(std::string frist_name, std::string last_name,
	std::string nickname, std::string phone_number, std::string secret){
	Contact new_contact;

	PhoneBook::slide_contacts(this);
	new_contact.set_contact(frist_name, last_name, nickname, phone_number, secret);
this->Contacts[0] = new_contact;
}

void    PhoneBook::print_contact(int i){
	std::cout << "Frist Name: " << this->Contacts[i].get_frist_name() << std::endl;
	std::cout << "Last Name: " << this->Contacts[i].get_last_name() << std::endl;
	std::cout << "Nickname: " << this->Contacts[i].get_nickname() << std::endl;
	std::cout << "Phone Number: " << this->Contacts[i].get_phone_number() << std::endl;
	std::cout << "Darkest Secret: " << this->Contacts[i].get_darkest_secret() << std::endl;
}

int	PhoneBook::print_info(int i){
	//if (this->Contacts[i].get_frist_name().empty())
		//return (1);
	if (i > 0)
			std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|" << std::setw(10) << i << "|";
	if (this->Contacts[i].get_frist_name().length() > 10)
		std::cout << "|" << std::string(this->Contacts[i].get_frist_name(), 0, 9) << ".|";
	else
		std::cout << "|" << std::setw(10) << this->Contacts[i].get_frist_name() << "|";
	if (this->Contacts[i].get_last_name().length() > 10)
		std::cout << std::string(this->Contacts[i].get_last_name(), 0, 9) << ".|";
	else
		std::cout << std::setw(10) << this->Contacts[i].get_last_name() << "|";
	if (this->Contacts[i].get_nickname().length() > 10)
		std::cout << std::string(this->Contacts[i].get_nickname(), 0, 9) << ".|";
	else
		std::cout << std::setw(10) << this->Contacts[i].get_nickname() << "|";
	std::cout <<endl;
return (0);
}
