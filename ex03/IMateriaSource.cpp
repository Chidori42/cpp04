/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 06:03:10 by ael-fagr          #+#    #+#             */
/*   Updated: 2025/02/09 02:27:11 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"

IMateriaSource::~IMateriaSource(){
    std::cout << "IMateriaSource Destructor Called" << std::endl;
}
void IMateriaSource::learnMateria(AMateria*){
    
}

AMateria* IMateriaSource::createMateria(std::string const & type){
    if (type == "ice")
        return (new Ice());
    else if (type == "cure")
        return (new Cure());
}