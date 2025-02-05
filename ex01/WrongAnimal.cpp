/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 21:22:13 by ael-fagr          #+#    #+#             */
/*   Updated: 2025/02/02 21:23:08 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal"){
    std::cout << "A WrongAnimal has been created" << std::endl;
}
WrongAnimal::WrongAnimal(std::string type){
    this->setType(type);
    std::cout << "A WrongAnimal has been created" << std::endl;
}
WrongAnimal::~WrongAnimal(){
    std::cout << "A WrongAnimal has been destroyed" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & src){
    this->setType(src.getType());
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const & src){
    if (this != &src)
    {
        this->type = src.getType();
    }
    return *this;
}

std::string WrongAnimal::getType() const{
    return this->type;
}

void WrongAnimal::setType(std::string type){
    this->type = type;
}

void WrongAnimal::makeSound() const{
    std::cout << "WrongAnimal sound" << std::endl;
}