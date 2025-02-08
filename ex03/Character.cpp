/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 05:47:07 by ael-fagr          #+#    #+#             */
/*   Updated: 2025/02/08 05:49:03 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const & name){

}
Character::Character(const Character &other){

}
Character &Character::operator=(const Character &other){

}
Character::~Character(){

}

std::string const &Character::getName() const{

}
void Character::equip(AMateria* m){

}
void Character::unequip(int idx){

}
void Character::use(int idx, ICharacter& target){

}