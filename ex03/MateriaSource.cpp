/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 05:58:47 by ael-fagr          #+#    #+#             */
/*   Updated: 2025/02/09 03:34:29 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
        materiaSlots[i] = NULL;
    std::cout <<  "MateriaSource Constructor Called" << std::endl;
}

MateriaSource::~MateriaSource(){
    for (int i = 0; i < 4; i++)
        delete materiaSlots[i];
    std::cout <<  "MateriaSource Destructor Called" << std::endl;
}
MateriaSource::MateriaSource(const MateriaSource &other){
    for (int i = 0; i < 4; i++)
        this->materiaSlots[i] = other.materiaSlots[i];
}
MateriaSource &MateriaSource::operator=(const MateriaSource &other){
    if (this != &other)
    {
        for (int i = 0; i < 4; i++)
            this->materiaSlots[i] = other.materiaSlots[i];
    }
    return (*this);
}

void MateriaSource::learnMateria(AMateria* m) {
    if (!m)
        return;
    for (int i = 0; i < 4; i++) {
        if (!materiaSlots[i]) {
            materiaSlots[i] = m;
            std::cout << "Materia learned and stored in slot " << i << std::endl;
            return;
        }
    }
    std::cout << "MateriaSource is full, cannot learn more" << std::endl;
}

// Create Materia: Returns a copy of learned materia
AMateria* MateriaSource::createMateria(const std::string& type) {
    for (int i = 0; i < 4; i++) {
        if (materiaSlots[i] && materiaSlots[i]->getType() == type)
            return materiaSlots[i]->clone(); // Create new instance
    }
    std::cout << "Materia type '" << type << "' not found" << std::endl;
    return NULL;
}