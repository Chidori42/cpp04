/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 16:35:07 by ael-fagr          #+#    #+#             */
/*   Updated: 2025/02/12 18:10:52 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal"){
    std::cout << "An Animal has been created" << std::endl;
}
Animal::Animal(std::string type){
    this->setType(type);
    std::cout << "An Animal has been created" << std::endl;
}
Animal::~Animal(){
    std::cout << "An Animal has been destroyed" << std::endl;
}

Animal::Animal(Animal const & src){
    this->setType(src.getType());
}
Animal &Animal::operator=(Animal const & src){
    if (this != &src)
    {
        this->setType(src.getType());
    }
    return *this;
}
std::string Animal::getType() const{
    return this->type;
}
void Animal::setType(std::string type){
    this->type = type;
}
void Animal::makeSound() const{
    std::cout << "Animal sound" << std::endl;
}