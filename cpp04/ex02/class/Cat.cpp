/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-giov <dde-giov@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 20:01:23 by dde-giov          #+#    #+#             */
/*   Updated: 2024/09/16 16:12:33 by dde-giov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
    brain = new Brain();
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &src) : Animal(src) {
    brain = new Brain(*src.brain);
    *this = src;
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &src) {
    if (this != &src) {
        Animal::operator=(src);
        delete brain;
        brain = new Brain(*src.brain);
    }
    std::cout << "Cat assignation operator called" << std::endl;
    return *this;
}

Cat::~Cat() {
    delete brain;
    std::cout << "Cat destructor called" << std::endl;
}

void    Cat::makeSound() const {
    std::cout << "Miao Miao" << std::endl;
}

Brain *Cat::getBrain() const {
    return brain;
}