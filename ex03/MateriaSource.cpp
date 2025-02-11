/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 05:58:47 by ael-fagr          #+#    #+#             */
/*   Updated: 2025/02/11 12:43:40 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
        materiaSlots[i] = NULL;
    // std::cout <<  "MateriaSource Constructor Called" << std::endl;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
        delete materiaSlots[i];
    // std::cout <<  "MateriaSource Destructor Called" << std::endl;
}
MateriaSource::MateriaSource(const MateriaSource &other)
{
    for (int i = 0; i < 4; i++)
        this->materiaSlots[i] = other.materiaSlots[i];
}
MateriaSource &MateriaSource::operator=(const MateriaSource &other)
{
    if (this != &other)
    {
        for (int i = 0; i < 4; i++)
            delete this->materiaSlots[i];

        for (int i = 0; i < 4; i++) {
            if (other.materiaSlots[i])  
                this->materiaSlots[i] = other.materiaSlots[i]->clone(); 
            else
                this->materiaSlots[i] = NULL;
        }
    }
    return (*this);
}

void MateriaSource::learnMateria(AMateria* m)
{
    if (!m)
        return;
    for (int i = 0; i < 4; i++)
    {
        if (!materiaSlots[i])
        {
            std::cout << "Materia already learned" << "in index = " << i << std::endl;
            materiaSlots[i] = m;
            return;
        }
    }
    std::cout << "MateriaSource is full, cannot learn more" << std::endl;
}

AMateria* MateriaSource::createMateria(const std::string& type)
{
    for (int i = 0; i < 4; i++)
    {
        if (materiaSlots[i] && materiaSlots[i]->getType() == type)
        {
            return materiaSlots[i]->clone();
        }
    }
    std::cout << "Materia type '" << type << "' not found" << std::endl;
    return NULL;
}