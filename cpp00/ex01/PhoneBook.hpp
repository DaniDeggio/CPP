/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-giov <dde-giov@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 17:26:36 by dde-giov          #+#    #+#             */
/*   Updated: 2024/06/05 15:01:06 by dde-giov         ###   ########.fr       */
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
	void	set_contact(std::string frist_name, std::string last_name,
		std::string nickname, int phone_number);
};

#endif
