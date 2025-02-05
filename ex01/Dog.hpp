/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 16:34:49 by ael-fagr          #+#    #+#             */
/*   Updated: 2025/02/05 14:57:42 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal{
    private:
        Brain *tr;
    public:
        Dog();
        Dog(std::string type);
        ~Dog();

        Dog(Dog const & src);
        Dog &operator=(Dog const & src);
    
        void makeSound() const;

        std::string getType() const;
        void setType(std::string type);
};

#endif