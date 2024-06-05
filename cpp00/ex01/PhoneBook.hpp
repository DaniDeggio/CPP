/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-giov <dde-giov@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 17:26:36 by dde-giov          #+#    #+#             */
/*   Updated: 2024/05/30 16:33:32 by dde-giov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

#ifdef PHONEBOOK_HPP
#define	PHONEBOOK_HPP

class PhoneBook{
private:
	Contact	Contacts[8];
public:
	void	set_contact(std::string frist_name, std::string last_name,
		std::string nickname, int phone_number);
};

#endif
