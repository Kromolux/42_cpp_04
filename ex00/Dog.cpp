/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaufman <rkaufman@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 09:51:01 by rkaufman          #+#    #+#             */
/*   Updated: 2022/05/19 11:32:02 by rkaufman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
	std::cout << COLOR_YELLOW << "[Dog] default constructor called\n" << COLOR_DEFAULT;
}

Dog::Dog(Dog const & input) : Animal("Dog")
{
	*this = input;
	std::cout << COLOR_YELLOW << "[Dog] copy constructor called\n";
}

Dog const & Dog::operator=(Dog const & input)
{
	this->_type = input._type;
	std::cout << COLOR_YELLOW << "[Dog] assignement constructor called\n" << COLOR_DEFAULT;
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << COLOR_GREEN << "[Dog] destructor called\n" << COLOR_DEFAULT;
}

void	Dog::makeSound(void) const
{
	std::cout << COLOR_YELLOW << "[Dog] Woof! Woof!\n" << COLOR_DEFAULT;
}
