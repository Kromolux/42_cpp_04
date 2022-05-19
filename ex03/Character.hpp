/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaufman <rkaufman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 20:06:15 by rkaufman          #+#    #+#             */
/*   Updated: 2022/05/19 22:43:06 by rkaufman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include <iostream>
# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character : public ICharacter
{

public:
	
	Character(std::string const & name);
	Character(Character const & input);
	Character const & operator=(Character const & input);
	~Character(void);

	std::string const & getName(void) const;
	void equip(AMateria * m);
	void unequip(int idx);
	void use(int idx, ICharacter & target);

private:

	Character(void);

	std::string	_name;
	AMateria * _slot[4];
	AMateria **_floor;
	int _indexFloor;
};

#endif