/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 05:47:07 by ael-fagr          #+#    #+#             */
/*   Updated: 2025/02/13 22:48:10 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const & name): name(name)
{
    for (int i = 0; i < 4; i++)
    {
        this->inventory[i] = NULL;
        this->tmp_inventory[i] = NULL;
    }
    this->tmp_index = 0;
    // std::cout << "Character Parametrize Consructor Called" << std::endl;
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
    {
        delete this->inventory[i];
        delete this->tmp_inventory[i];
    }
    // std::cout << "Character Destructor Called" << std::endl;
}

Character::Character(const Character &other) : ICharacter(other){
   for (int i = 0; i < 4; i++)
    {
        delete inventory[i];
        this->inventory[i] = other.inventory[i]->clone();
    }
    this->name = other.name;
}
Character &Character::operator=(const Character &other)
{
    if (this != &other)
    {
        for (int i = 0; i < 4; i++)
        {
            delete inventory[i];
            this->inventory[i] = other.inventory[i]->clone();
        }
        this->name = other.name;
    }
    return (*this);
}

std::string const &Character::getName() const
{
    return (this->name);
}
void Character::equip(AMateria* m)
{
    for (int i = 0; i < 4; i++){
        if (!this->inventory[i])
        {
            this->inventory[i] = m->clone();
            return ;
        }
    }
}

void Character::unequip(int idx)
{
    if (idx >= 0 && idx < 4 && this->inventory[idx])
    {
        this->tmp_inventory[this->tmp_index++] = this->inventory[idx];
        this->inventory[idx] = NULL;
    }
}
void Character::use(int idx, ICharacter& target)
{
    if (idx < 0 || idx >= 4 || !this->inventory[idx])
        return;
    this->inventory[idx]->use(target);
}