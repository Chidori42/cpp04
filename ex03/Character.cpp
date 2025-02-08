/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 05:47:07 by ael-fagr          #+#    #+#             */
/*   Updated: 2025/02/08 21:54:34 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const & name): name(name){
    std::cout << "Character Parametrize Consructor Called" << std::endl;
}

Character::~Character(){
    std::cout << "Character Destructor Called" << std::endl;
}

Character::Character(const Character &other){
    
}
Character &Character::operator=(const Character &other){

}

std::string const &Character::getName() const{
    return (this->name);
}
void Character::equip(AMateria* m){

}
void Character::unequip(int idx){

}
void Character::use(int idx, ICharacter& target){

}