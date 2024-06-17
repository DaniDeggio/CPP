/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-giov <dde-giov@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 17:26:36 by dde-giov          #+#    #+#             */
/*   Updated: 2024/06/17 02:12:10 by dde-giov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PHONEBOOK_HPP
# define	 PHONEBOOK_HPP

#include "Contact.hpp"
#include <iomanip>

class PhoneBook{
private:
	Contact	Contacts[8];
public:
	PhoneBook();
	~PhoneBook();
    void   slide_contacts();
	void	add_contact(std::string frist_name, std::string last_name,
		std::string nickname, std::string phone_number, std::string secret);
	void	print_contact(int i);
	int		print_info(int i);
};

#endif
