/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 15:13:52 by ael-fagr          #+#    #+#             */
/*   Updated: 2025/02/05 17:32:23 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal{
    protected:
        std::string type;
    public:
        Animal();
        Animal(std::string type);
        virtual ~Animal() = 0;

        Animal(Animal const & src);
        Animal &operator=(Animal const & src);

        std::string getType() const;
        void setType(std::string type);

        virtual void makeSound() const = 0;
};

#endif