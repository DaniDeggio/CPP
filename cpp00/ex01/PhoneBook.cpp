/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-giov <dde-giov@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 16:29:03 by dde-giov          #+#    #+#             */
/*   Updated: 2024/06/05 16:48:00 by dde-giov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){
    return ;
}

PhoneBook::~PhoneBook(){
    return ;
}

void PhoneBook::slide_contacts(PhoneBook pb){
    int i = 7;

    while(i > 0){
        pb.contact[i] = pb.contact[i - 1]
        i--;
    }
}

void	PhoneBook::add_contact(std::string frist_name, std::string last_name,
    std::string nickname, std::string phone_number, std::string secret){
    Contact new;

    PhoneBook::slide_contacts(this);
    new.set_contat(frist_name, last_name, nickname, phone_nuber, secret);
    this.contact[0] = new;
//}