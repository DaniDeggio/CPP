/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-giov <dde-giov@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 19:54:02 by dde-giov          #+#    #+#             */
/*   Updated: 2024/09/19 16:32:27 by dde-giov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animals.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;
	delete i;

	std::cout << std::endl;
	const Animal* animals[100];
	for (int i = 0; i < 100; i++)
	{
		if (i < 50)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}

	std::cout << std::endl;
	for (int i = 0; i < 100; i++)
		delete animals[i];

	std::cout << std::endl;
	
	// Test for Deep Copy
	Dog originalDog;
    originalDog.getBrain()->setIdea(0, "Chase the cat");

    Dog copiedDog(originalDog);
    std::cout << "Original Dog Idea: " << originalDog.getBrain()->getIdea(0) << std::endl;
    std::cout << "Copied Dog Idea: " << copiedDog.getBrain()->getIdea(0) << std::endl;

    copiedDog.getBrain()->setIdea(0, "Eat the bone");
    std::cout << "Original Dog Idea after modification: " << originalDog.getBrain()->getIdea(0) << std::endl;
    std::cout << "Copied Dog Idea after modification: " << copiedDog.getBrain()->getIdea(0) << std::endl;

	// Animal test; // Animal is an abstract class, so it can't be instantiated. uncomment to chck

	return 0;
}