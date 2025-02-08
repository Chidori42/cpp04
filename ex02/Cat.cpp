/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 16:35:01 by ael-fagr          #+#    #+#             */
/*   Updated: 2025/02/05 16:19:10 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(){
    this->tr = new Brain();
    this->type = "Cat";
    std::cout << "A Cat has been created" << std::endl;
}
Cat::Cat(std::string type){
    this->tr = new Brain();
    this->type = type;
    std::cout << "A Cat has been created" << std::endl;
}

Cat::~Cat(){
    delete this->tr;
    std::cout << "A Cat has been destroyed" << std::endl;
}

Cat::Cat(Cat const & src) : Animal(src){
    this->type = src.getType();
    std::cout << "A Cat has been created" << std::endl;
}
Cat &Cat::operator=(Cat const & src){
    this->type = src.getType();
    return *this;
}
void Cat::makeSound() const{
    std::cout << "Meow Meow" << std::endl;
}
std::string Cat::getType() const{
    return this->type;
}
void Cat::setType(std::string type){
    this->type = type;
}