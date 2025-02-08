/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 05:51:48 by ael-fagr          #+#    #+#             */
/*   Updated: 2025/02/08 21:45:53 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(){
    this->type = "ice";
    std::cout << "Ice Constructor Called" << std::endl;
}

Ice::~Ice(){
    std::cout << "Ice Destructor Called" << std::endl;
}

Ice::Ice(const Ice &other){
    this->type = other.type;
}

Ice &Ice::operator=(const Ice &other){
    if (this != &other)
       this->type = other.type;
    return (*this); 
}

AMateria* Ice::clone() const{

}

void Ice::use(ICharacter& target){

}