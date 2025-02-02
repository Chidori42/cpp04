/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 16:34:55 by ael-fagr          #+#    #+#             */
/*   Updated: 2025/02/02 18:06:04 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(){
    this->type = "Dog";
    std::cout << "A Dog has been created" << std::endl;
}
Dog::~Dog(){
    std::cout << "A Dog has been destroyed" << std::endl;
}
Dog::Dog(std::string type){
    this->type = type;
    std::cout << "A Dog has been created" << std::endl;
}
Dog::Dog(Dog const & src){
    this->type = src.getType();
    std::cout << "A Dog has been created" << std::endl;
}
Dog &Dog::operator=(Dog const & src){
    this->type = src.getType();
    return *this;
}
void Dog::makeSound() const{
    std::cout << "Heow Heow" << std::endl;
}
std::string Dog::getType() const{
    return this->type;
}
void Dog::setType(std::string type){
    this->type = type;
}