/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-giov <dde-giov@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 17:26:36 by dde-giov          #+#    #+#             */
/*   Updated: 2024/05/28 21:58:08 by dde-giov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phone.hpp"

#include "Phone.hpp"

#ifdef PHONEBOOK_HPP
#define	PHONEBOOK_HPP

class PhoneBook
{
private:
	Contact	Contacts[8]; 
public:
	PhoneBook(/* args */);
	~PhoneBook();
};

PhoneBook::PhoneBook(/* args */)
{
}

PhoneBook::~PhoneBook()
{
}
