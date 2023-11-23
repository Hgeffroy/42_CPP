/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 13:55:57 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/11/23 17:26:45 by hgeffroy         ###   ########.fr       */
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
# include <ctime>
# include <sys/time.h>
# include <utility>
# include <iterator>
# include <algorithm>

// Utils
void	checkArg(std::string arg);
int		getTime(struct timeval startTime);
void	printContainerPairs(std::vector< std::pair<int, int> >& v);

// F-J vectors
std::vector<int>	FJSort(char **av);

# include "PmergeMe.tpp"

#endif
