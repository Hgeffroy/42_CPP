/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 12:49:05 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/11/04 13:25:45 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class	DiamondTrap : public FragTrap, public ScavTrap
{
	private:
		std::string		name;
	
	public:
	
	DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(DiamondTrap const &param);
	~DiamondTrap();
	
	DiamondTrap	&operator=(DiamondTrap const &param);
	
	void	whoAmI();
};

#endif