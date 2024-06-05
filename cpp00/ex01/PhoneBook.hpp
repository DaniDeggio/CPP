/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-giov <dde-giov@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 17:26:36 by dde-giov          #+#    #+#             */
/*   Updated: 2024/06/05 16:47:51 by dde-giov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PHONEBOOK_HPP
#define	PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook{
private:
	Contact	Contacts[8];
public:
	PhoneBook();
	~PhoneBook();
    void   PhoneBook::slide_contacts(PhoneBook pb);
	void	PhoneBook::add_contact(std::string frist_name, std::string last_name,
		std::string nickname, std::string phone_number, std::string secret);
};

#endif
