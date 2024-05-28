/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-giov <dde-giov@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 18:30:42 by dde-giov          #+#    #+#             */
/*   Updated: 2024/05/28 19:24:05 by dde-giov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "Phone.hpp"

void    Contact::set_frist_name(string   frist_name){
    this.frist_name = frist_name;
}

void    Contact::set_last_name(string   last_name){
    this.last_name = last_name;
}

void    Contact::set_nickname(string   nickname){
    this.nickname = nickname;
}

void    Contact::set_phone_number(int   phone_number){
    this.phone_number = phone_number;
}

std::string  get_frist_name(){
    return  (this.frist_name)
}

std::string  get_last_name(){
    return  (this.last_name)
}

std::string  get_nickname(){
    return  (this.nickname)
}

std::string  get_phone_number(){
    return  (this.phone_number)
}
