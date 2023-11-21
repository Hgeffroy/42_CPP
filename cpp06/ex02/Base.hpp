/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:45:48 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/11/09 08:18:39 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>
# include <time.h>
# include <cstdlib>

class	Base
{

public:

	virtual ~Base() {};

};

class	A : public Base {};
class	B : public Base {};
class	C : public Base {};

Base*	generate();
void	identify(Base* p);
void	identify(Base& p);

#endif