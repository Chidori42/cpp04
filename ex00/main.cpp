/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 17:46:34 by ael-fagr          #+#    #+#             */
/*   Updated: 2025/02/12 18:23:10 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    // const WrongAnimal* l = new WrongAnimal();
    // const WrongAnimal* k = new WrongCat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    // std::cout << l->getType() << " " << std::endl;
    // std::cout << k->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    // l->makeSound();
    // k->makeSound();
    
    meta->makeSound();
    
    delete i;
    delete j;
    delete meta;
    
    // delete l;
    // delete k;
    
    return 0;
}