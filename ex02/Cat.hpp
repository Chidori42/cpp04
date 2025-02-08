/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 16:34:58 by ael-fagr          #+#    #+#             */
/*   Updated: 2025/02/05 14:57:15 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal{
    private:
        Brain *tr;
    public:
        Cat();
        Cat(std::string type);
        ~Cat();

        Cat(Cat const & src);
        Cat &operator=(Cat const & src);

        void makeSound() const;

        std::string getType() const;
        void setType(std::string type);

};

#endif