/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 05:47:07 by ael-fagr          #+#    #+#             */
/*   Updated: 2025/02/11 12:44:04 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const & name): name(name)
{
    for (int i = 0; i < 4; i++)
        inventory[i] = NULL;
    // std::cout << "Character Parametrize Consructor Called" << std::endl;
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
        delete inventory[i];
    // std::cout << "Character Destructor Called" << std::endl;
}

Character::Character(const Character &other) : ICharacter(other){
    *this = other;
}
Character &Character::operator=(const Character &other)
{
    if (this != &other)
        this->name = other.name;
    return (*this);
}

std::string const &Character::getName() const
{
    return (this->name);
}
void Character::equip(AMateria* m)
{
    for (int i = 0; i < 4; i++){
        delete inventory[i];
        inventory[i] = m->clone();
    }
}

void Character::unequip(int idx)
{
    if (idx >= 0 && idx < 4)
    {
        inventory[idx] = NULL;
    }
}
void Character::use(int idx, ICharacter& target)
{
    if (idx < 0 || idx >= 4 || !inventory[idx])
        return;
    this->inventory[idx]->use(target);
}