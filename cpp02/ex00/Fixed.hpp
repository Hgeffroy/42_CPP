/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 10:37:24 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/10/19 13:45:27 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
private:
	int					nb;
	static const int	fracBits = 8;
	
public:
	Fixed();
	Fixed(Fixed const &param);
	~Fixed();
	
	Fixed	&operator=(Fixed const &param);
	
	int		getRawBits(void);
	void	setRawBits(int const raw);
};


#endif