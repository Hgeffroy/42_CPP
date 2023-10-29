/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 14:14:14 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/10/28 09:57:01 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class	WrongCat : public WrongAnimal
{
	
public:
	
	WrongCat();
	~WrongCat();
	WrongCat(WrongCat const &cpyFrom);
	
	WrongCat	&operator=(WrongCat const &wrongCat);
	
	void		makeSound() const;

};

#endif