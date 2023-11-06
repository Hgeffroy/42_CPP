/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 09:46:41 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/11/06 09:38:19 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{

private:

	// static int	maxHitPoints;
	// static int	maxEnergyPoints;
	// static int	maxAttackDamage;

protected:
	
	ScavTrap();
	
public:

	ScavTrap(std::string param);
	~ScavTrap();

	ScavTrap	&operator=(ScavTrap const &param);

	void			guardGate();
	virtual void	attack(const std::string &target);
	
	// int	getHitPoints() const;
	// int	getEnergyPoints() const;
	// int	getAttackDamage() const;
};

#endif