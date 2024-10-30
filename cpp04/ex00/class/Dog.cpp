/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-giov <dde-giov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 20:01:29 by dde-giov          #+#    #+#             */
/*   Updated: 2024/10/30 15:28:33 by dde-giov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"


Dog::Dog() : Animal("Dog") {
    std::cout << "Dog constructor called" << std::endl;
}

Dog::~Dog() {
    std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog(const Dog &src) {
    *this = src;
}

Dog &Dog::operator=(const Dog &src) {
    if (this != &src)
        this->type = src.type;
    return *this;
}

void    Dog::makeSound() const {
    std::cout << "BAU Bau" << std::endl;
}

