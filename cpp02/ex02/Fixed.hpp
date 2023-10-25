/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 10:37:24 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/10/20 12:32:05 by hgeffroy         ###   ########.fr       */
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
	Fixed	operator+(Fixed const &param);
	Fixed	operator-(Fixed const &param);
	Fixed	operator*(Fixed const &param);
	Fixed	operator/(Fixed const &param);

	bool	operator>(Fixed const &param);
	bool	operator>=(Fixed const &param);
	bool	operator<(Fixed const &param);
	bool	operator<=(Fixed const &param);
	bool	operator==(Fixed const &param);
	bool	operator!=(Fixed const &param);
	
	Fixed	&operator++(void);
	Fixed	operator++(int);
	Fixed	&operator--(void);
	Fixed	operator--(int);

	static Fixed	&min(Fixed &a, Fixed &b);
	static const Fixed	&min(Fixed const &a, Fixed const &b);
	static Fixed	&max(Fixed &a, Fixed &b);
	static const Fixed	&max(Fixed const &a, Fixed const &b);
	
	int		getRawBits(void);
	int		toInt(void) const;
	float	toFloat(void) const;
	void	setRawBits(int const raw);
};

std::ostream	&operator<<(std::ostream &o, Fixed const &param);

#endif