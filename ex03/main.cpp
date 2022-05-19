/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaufman <rkaufman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 19:51:03 by rkaufman          #+#    #+#             */
/*   Updated: 2022/05/19 22:59:28 by rkaufman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "colors.h"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

int	main(void)
{
	IMateriaSource* spellBook = new MateriaSource();
	spellBook->learnMateria(new Ice());
	spellBook->learnMateria(new Cure());

	ICharacter* Gandalf = new Character("Gandalf");

	AMateria* tmp;
	tmp = spellBook->createMateria("ice");
	Gandalf->equip(tmp);
	tmp = spellBook->createMateria("cure");
	Gandalf->equip(tmp);
	
	ICharacter* frodo = new Character("Frodo");
	
	Gandalf->use(0, *frodo);
	Gandalf->use(1, *frodo);

	delete frodo;
	delete Gandalf;
	delete spellBook;

	return (0);
}
