/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 21:24:22 by ael-fagr          #+#    #+#             */
/*   Updated: 2025/02/02 21:43:20 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat"){
    std::cout << "A WrongCat has been created" << std::endl;
}
WrongCat::~WrongCat(){
    std::cout << "A WrongCat has been destroyed" << std::endl;
}
WrongCat::WrongCat(std::string type){
    this->setType(type);
    std::cout << "A WrongCat has been created" << std::endl;
}
WrongCat::WrongCat(WrongCat const & src) : WrongAnimal(src){
    this->setType(src.getType());
}
WrongCat &WrongCat::operator=(WrongCat const & src){
    this->setType(src.getType());
    return *this;
}
void WrongCat::makeSound() const{
    std::cout << "Meow Meow" << std::endl;
}