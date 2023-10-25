/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 10:51:11 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/10/24 15:36:21 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:

	FragTrap();

public:
	
	FragTrap(std::string param);
	~FragTrap();

	FragTrap	&operator=(FragTrap const &param);

	void	highFivesGuys();
	
};

#endif