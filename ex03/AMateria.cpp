/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaufman <rkaufman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 20:31:06 by rkaufman          #+#    #+#             */
/*   Updated: 2022/05/19 22:56:54 by rkaufman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type)
{
	this->_type = type;
	std::cout << COLOR_WHITE << "[AMateria] type constructor called type= " << type << std::endl << COLOR_DEFAULT;
}

AMateria::AMateria(AMateria const & input)
{
	*this = input;
	std::cout << COLOR_WHITE << "[AMateria] copy constructor called\n";
}

AMateria const & AMateria::operator=(AMateria const & input)
{
	this->_type = input._type;
	std::cout << COLOR_WHITE << "[AMateria] assignement constructor called\n" << COLOR_DEFAULT;
	return (*this);
}

AMateria::~AMateria(void)
{
	std::cout << COLOR_WHITE << "[AMateria] destructor called\n" << COLOR_DEFAULT;
}

std::string	const & AMateria::getType(void) const
{
	return (this->_type);
}

void	AMateria::use(ICharacter & target)
{
	(void) target;
}
