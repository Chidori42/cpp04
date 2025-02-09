/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 05:41:41 by ael-fagr          #+#    #+#             */
/*   Updated: 2025/02/09 02:10:29 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(){
    std::cout << "AMateria Constructor Called" << std::endl;
}
AMateria::~AMateria(){
    std::cout << "AMateria Destructor Called" << std::endl;
}

AMateria::AMateria(std::string const & type): type(type){
    std::cout << "AMateria Parametraze Constructor Called" << std::endl;
}
AMateria &AMateria::operator=(std::string const & type){
    if (this->type != type)
        this->type = type;
    return (*this);
}
std::string const &AMateria::getType() const{
    return (this->type);
}
AMateria AMateria::*clone(){
    return (new AMateria(this->type));
}

void AMateriause(ICharacter& target){
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}