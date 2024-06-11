/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-giov <dde-giov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 16:29:03 by dde-giov          #+#    #+#             */
/*   Updated: 2024/06/11 18:08:18 by dde-giov         ###   ########.fr       */
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