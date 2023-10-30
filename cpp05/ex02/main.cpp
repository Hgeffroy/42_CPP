/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 13:06:19 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/10/30 13:20:13 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	Bureaucrat	a("Harvey", 1);
	Bureaucrat	b("Louis", 150);

	Form		f1("28B", 20, 20);

	a.signForm(f1);
	b.signForm(f1);
}