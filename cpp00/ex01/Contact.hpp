/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-giov <dde-giov@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 17:26:53 by dde-giov          #+#    #+#             */
/*   Updated: 2024/05/30 16:30:34 by dde-giov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifdef CONTACT_HPP
#define	CONTACT_HPP

#include <iostream>

class Contact {
private:
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	int			phone_number;
	std::string	darkest_secret;
public:
	void		set_first_name(std::string first_name);
	void		set_last_name(std::string last_name);
	void		set_nickname(std::string nickname);
	void		set_phone_number(int phone_number);
	void		set_darkest_secret(std::string darkest_secret);
	std::string	get_first_name();
	std::string	get_last_name();
	std::string	get_nickname();
	int			get_phone_number();
	std::string	get_darkest_secret();
};

#endif


