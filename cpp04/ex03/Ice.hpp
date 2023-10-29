/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 10:51:38 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/10/28 13:52:45 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class	Ice : public AMateria
{
	
public:

	Ice();
	~Ice();
	Ice(Ice const &cpyFrom);

	Ice	&operator=(Ice const &ice);

	AMateria* clone() const;

};

#endif