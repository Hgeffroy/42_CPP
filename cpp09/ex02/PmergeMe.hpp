/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 13:55:57 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/11/20 12:49:07 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGE_HPP
# define PMERGE_HPP

# include <iostream>
# include <sstream>
# include <string>
# include <deque>
# include <vector>
# include <cstdlib>
# include <utility>
# icnlude <iterator>

# include "utils.tpp"

// Utils
void	checkArg(std::string arg);
void	printContainer(std::vector<int>& v, std::string name);



// Merge insert
void				fillContainer(char **av, std::vector<int>& v);
void				insertSort(std::vector<int>& v);
std::vector<int>	sort(std::vector<int>& v, int sz);

// F-J vectors
void				fillContainerPairs(char **av, std::vector< std::pair<int, int> >& v);

#endif
