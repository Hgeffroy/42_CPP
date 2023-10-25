/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 10:37:24 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/10/19 15:56:03 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
private:
	int					nb;
	static const int	fracBits = 8;
	
public:
	Fixed();
	Fixed(int const param);
	Fixed(float const param);
	Fixed(Fixed const &param);
	~Fixed();
	
	Fixed	&operator=(Fixed const &param);
	
	int		getRawBits(void);
	int		toInt(void) const;
	float	toFloat(void) const;
	void	setRawBits(int const raw);
};

std::ostream	&operator<<(std::ostream &o, Fixed const &param);

#endif