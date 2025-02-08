/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 04:21:02 by ael-fagr          #+#    #+#             */
/*   Updated: 2025/02/08 05:52:13 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>

class Ice : public AMateria
{
    public:
        Ice();
        Ice(const Ice &other);
        Ice &operator=(const Ice &other);
        ~Ice();
    
        AMateria* clone() const;
        void use(ICharacter& target);
};

#endif
