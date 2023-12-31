/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 09:46:41 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/10/26 09:58:58 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:

	ScavTrap();
	
public:

	ScavTrap(std::string param);
	~ScavTrap();

	ScavTrap	&operator=(ScavTrap const &param);

	void	guardGate();
	void	attack(const std::string &target);
		
};

#endif