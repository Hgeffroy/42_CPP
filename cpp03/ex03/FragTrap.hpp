/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 10:51:11 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/11/04 13:23:26 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
	
private:

	static int	maxHitPoints;
	static int	maxEnergyPoints;
	static int	maxAttackDamage;
	
protected:

	FragTrap();
	
public:
	
	FragTrap(std::string param);
	~FragTrap();

	FragTrap	&operator=(FragTrap const &param);

	void	highFivesGuys();
	int		getHitPoints() const;
	int		getEnergyPoints() const;
	int		getAttackDamage() const;
	
};

#endif