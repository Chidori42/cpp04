/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 13:28:20 by ael-fagr          #+#    #+#             */
/*   Updated: 2025/02/09 03:51:49 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
    std::cout << "Brain Constructor Called" << std::endl;
}
Brain::~Brain(){
    std::cout << "Brain Destructor Called" << std::endl;
}
        
Brain::Brain(Brain const &other){
    for (int i = 0; i < 100; i++)
        this->ideas[i] = other.ideas[i];   
}
Brain &Brain::operator=(Brain const &other){
    if (this != &other)
    {
        for (int i = 0; i < 100; i++)
            this->ideas[i] = other.ideas[i];
    }
    return *this;
}