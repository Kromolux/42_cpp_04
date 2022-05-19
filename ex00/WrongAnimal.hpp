/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaufman <rkaufman@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 09:51:57 by rkaufman          #+#    #+#             */
/*   Updated: 2022/05/19 09:52:48 by rkaufman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H
# include <iostream>
# include "colors.h"

class	WrongAnimal
{

public:

	WrongAnimal(void);
	WrongAnimal(std::string type);
	WrongAnimal(WrongAnimal const & input);
	WrongAnimal const & operator=(WrongAnimal const & input);
	~WrongAnimal(void);

	void			makeSound(void) const;
	std::string		getType(void) const;

protected:

	std::string		_type;


private:


};

#endif