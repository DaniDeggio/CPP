/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-giov <dde-giov@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 18:30:42 by dde-giov          #+#    #+#             */
/*   Updated: 2024/06/05 15:03:00 by dde-giov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "Contact.hpp"

Contact::Contact(void)
{
    return ;
}

Contact::~Contact(void)
{
    return ;
}

void    Contact::set_contact(std::string frist_name, std::string last_name,
    std::string nickname, int phone_number){
    this->frist_name = frist_name;
    this->last_name = last_name;
    this->nickname = nickname;
    this->phone_number = phone_number;
}

void    Contact::set_frist_name(std::string   frist_name){
    this->frist_name = frist_name;
}

void    Contact::set_last_name(std::string   last_name){
    this->last_name = last_name;
}

void    Contact::set_nickname(std::string   nickname){
    this->nickname = nickname;
}

void    Contact::set_phone_number(int   phone_number){
    this->phone_number = phone_number;
}

std::string  get_frist_name(){
    return  (this->frist_name);
}

std::string  get_last_name(){
    return  (this->last_name);
}

std::string  get_nickname(){
    return  (this->nickname);
}

std::string  get_phone_number(){
    return  (this->phone_number);
}
