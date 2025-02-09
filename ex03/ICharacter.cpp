/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 05:55:30 by ael-fagr          #+#    #+#             */
/*   Updated: 2025/02/09 03:39:48 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

ICharacter::ICharacter()
{

}
ICharacter::~ICharacter(){

}
ICharacter::ICharacter(const ICharacter &other){

}
ICharacter &ICharacter::operator=(const ICharacter &other){

}
std::string const &ICharacter::getName() const{

}
void ICharacter::equip(AMateria* m){
    for (int i = 0; i < 4; i++)
}
void ICharacter::unequip(int idx){

}
void ICharacter::use(int idx, ICharacter& target){

}