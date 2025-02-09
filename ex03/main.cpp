/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 02:52:44 by ael-fagr          #+#    #+#             */
/*   Updated: 2025/02/09 03:34:14 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main() {
    MateriaSource src;
    AMateria* ice = new Ice();
    AMateria* cure = new Cure();

    src.learnMateria(ice);
    src.learnMateria(cure);

    AMateria* newMateria = src.createMateria("ice");
    if (newMateria)
        std::cout << "Created Materia: " << newMateria->getType() << std::endl;

    delete newMateria;

    return 0;
}
