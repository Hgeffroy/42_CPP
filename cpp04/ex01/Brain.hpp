/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 09:24:54 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/10/28 09:59:08 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <iostream>

class	Brain
{

private:

	std::string	_ideas[100];
	
public:

	Brain();
	~Brain();
	Brain(Brain const &cpyFrom);

	Brain &operator=(Brain const &brain);

};

#endif