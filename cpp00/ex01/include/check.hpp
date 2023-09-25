/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 14:18:50 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/09/22 13:06:43 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECK_HPP
# define CHECK_HPP

#include <iostream>
#include <string>

bool	CheckPhoneNumber(std::string phonenumber);
bool	CheckFirstName(std::string firstname);
bool	CheckLastName(std::string lastname);
bool	CheckNickname(std::string nickname);
void	PrintMenu(void);

#endif