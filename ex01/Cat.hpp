/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaufman <rkaufman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 09:44:25 by rkaufman          #+#    #+#             */
/*   Updated: 2022/05/19 15:57:07 by rkaufman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CAT_H
# define CAT_H
# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class	Cat : public Animal
{

public:

	Cat(void);
	Cat(Cat const & input);
	Cat const & operator=(Cat const & input);
	virtual	~Cat(void);

	virtual void	makeSound(void) const;
	void			setIdea(unsigned int index, std::string idea) const;
	std::string		getIdea(unsigned int index) const;

protected:


private:

	Brain * _myBrain;

};

#endif