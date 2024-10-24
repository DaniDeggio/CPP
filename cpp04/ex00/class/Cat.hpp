/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-giov <dde-giov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 19:58:27 by dde-giov          #+#    #+#             */
/*   Updated: 2024/10/24 20:20:24 by dde-giov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include <string>

#include "Animal.hpp"

class Cat : public Animal {
    public:
        Cat();
        Cat(const Cat &src);
        ~Cat();
        Cat &operator=(const Cat &src);
        
        void makeSound() const;
};

#endif