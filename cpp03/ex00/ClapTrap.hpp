/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 15:35:57 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/10/24 15:33:26 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
private:

	std::string	name;
	int			hitPoints;
	int			energyPoints;
	int			attackDamage;
	
	ClapTrap();
	
public:

	ClapTrap(std::string param);
	ClapTrap(ClapTrap const &param);
	~ClapTrap();
	
	ClapTrap	&operator=(ClapTrap const &param);

	void	attack(const std::string &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	
};

#endif