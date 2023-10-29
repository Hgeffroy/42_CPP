/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 11:07:37 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/10/28 10:20:27 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class	Cat : public AAnimal
{

private:

	Brain	*_brain;
	
public:
	
	Cat();
	~Cat();
	Cat(Cat const &cpyFrom);
	
	Cat	&operator=(Cat const &cat);

	void		makeSound() const;
	
};

#endif