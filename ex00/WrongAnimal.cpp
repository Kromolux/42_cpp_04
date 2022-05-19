/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaufman <rkaufman@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 09:57:16 by rkaufman          #+#    #+#             */
/*   Updated: 2022/05/19 09:59:50 by rkaufman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	std::cout << COLOR_GREEN << "[WrongAnimal] default constructor called\n" << COLOR_DEFAULT;
}

WrongAnimal::WrongAnimal(std::string type)
{
	this->_type = type;
	std::cout << COLOR_GREEN << "[WrongAnimal] type constructor called type= " << type << std::endl << COLOR_DEFAULT;
}

WrongAnimal::WrongAnimal(WrongAnimal const & input)
{
	*this = input;
	std::cout << COLOR_GREEN << "[WrongAnimal] copy constructor called\n";
}

WrongAnimal const & WrongAnimal::operator=(WrongAnimal const & input)
{
	this->_type = input._type;
	std::cout << COLOR_GREEN << "[WrongAnimal] assignement constructor called\n" << COLOR_DEFAULT;
	return (*this);
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << COLOR_GREEN << "[WrongAnimal] destructor called\n" << COLOR_DEFAULT;
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << COLOR_GREEN << "[WrongAnimal] makeSound default member function called\n" << COLOR_DEFAULT;
}

std::string	WrongAnimal::getType(void) const
{
	return (this->_type);
}
