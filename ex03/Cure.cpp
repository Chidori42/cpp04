/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 05:50:10 by ael-fagr          #+#    #+#             */
/*   Updated: 2025/02/11 12:43:56 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"


Cure::Cure(){
    this->type = "cure";
    // std::cout << "Cure Constructor Called" << std::endl;
}

Cure::~Cure(){
    // std::cout << "Cure Destructor Called" << std::endl;
}

Cure::Cure(const Cure &other) : AMateria(other){
    this->type = other.type;
}

Cure &Cure::operator=(const Cure &other){
    if (this != &other)
       this->type = other.type;
    return (*this);
}

AMateria* Cure::clone() const{
    return (new Cure());
}

void Cure::use(ICharacter& target){
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}