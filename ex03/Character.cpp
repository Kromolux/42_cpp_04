/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaufman <rkaufman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 21:05:06 by rkaufman          #+#    #+#             */
/*   Updated: 2022/05/19 23:02:17 by rkaufman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(){}

Character::Character(std::string const & name)
{
	this->_name = name;
	this->_floor = NULL;
	this->_indexFloor = -1;
	for (int i = 0; i < 4; i++)
	{
		this->_slot[i] = NULL;
	}
	std::cout << COLOR_YELLOW << "[Character] name constructor called name= " << name << std::endl << COLOR_DEFAULT;
}

Character::Character(Character const & input)
{
	*this = input;
	std::cout << COLOR_YELLOW << "[Character] copy constructor called\n";
}

Character const & Character::operator=(Character const & input)
{
	this->_name = input._name;
	for (int i = 0; i < 4; i++)
	{
		if (this->_slot[i] != NULL)
			this->_slot[i] = this->_slot[i]->clone();
	}
	std::cout << COLOR_YELLOW << "[Character] assignement constructor called\n" << COLOR_DEFAULT;
	return (*this);
}

Character::~Character(void)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_slot[i] != NULL)
			delete _slot[i];
	}
	for (int i = 0; i <= this->_indexFloor; i++)
	{
		delete this->_floor[i];
	}
	std::cout << COLOR_YELLOW << "[Character] destructor called\n" << COLOR_DEFAULT;
}

std::string const & Character::getName(void) const
{
	return (this->_name);
}

void Character::equip(AMateria * m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_slot[i] == NULL)
		{
			this->_slot[i] = m;
			std::cout << COLOR_YELLOW << this->_name << " equiped " << m->getType() << " at slot[" << i << "]\n" << COLOR_DEFAULT;
			m = NULL;
			break ;
		}
	}
	if (m != NULL)
	{
		std::cout	<< COLOR_YELLOW << this->_name << " tried to equiped " << m->getType() << " at a slot, but all are full! "
					<< m->getType() << " dropped on the floor\n" << COLOR_DEFAULT;
		this->_indexFloor++;
		this->_floor[this->_indexFloor] = m;
	}
}

void Character::unequip(int idx)
{
	if (this->_slot[idx] != NULL)
	{
		std::cout << COLOR_YELLOW << this->_name << " unquiped " << this->_slot[idx]->getType() << " from slot[" << idx << "]\n" << COLOR_DEFAULT;
		this->_indexFloor++;
		this->_floor[this->_indexFloor] = this->_slot[idx];
		this->_slot[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter & target)
{
	if (this->_slot[idx] != NULL)
	{
		std::cout << COLOR_YELLOW << this->_name << " " << COLOR_DEFAULT;
		this->_slot[idx]->use(target);
	}
}
