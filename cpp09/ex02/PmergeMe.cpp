/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 14:03:32 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/11/19 16:06:02 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void	printContainer(std::vector<int>& v, std::string name)
{
	std::vector<int>::iterator	it;
	std::cout << name << ": ";
	for (it = v.begin(); it != v.end(); ++it)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

void	checkArg(std::string arg) // Pas sur de ca, sinon mettre un char * et le cast a la main.
{
	std::istringstream	iss(arg);
	int 				i;

	iss >> i;
	if (!iss.eof() || iss.fail())
		throw std::exception();
}

void	fillContainer(char **av, std::vector<int>& v)
{
	int i = 1;

	while (av[i])
	{
		checkArg(av[i]);
		v.push_back(std::atoi(av[i]));
		i++;
	}
}

void	eraseFirstNotSorted(std::vector<int>& v)
{
	std::vector<int>::iterator	it1 = v.begin();
	int 						i = *it1;

	++it1;
	while (it1 != v.end())
	{
		if (*it1 < i)
		{
			v.erase(it1);
			return ;
		}
		i = *it1;
		++it1;
	}
}

void	insertSort(std::vector<int>& v) // 5 2, 5 2 6 8
{
	std::vector<int>::iterator	it1;

	for (it1 = v.begin(); it1 != v.end(); ++it1)
	{
		std::vector<int>::iterator	it2;
		for (it2 = v.begin(); it2 != it1; ++it2)
		{
			if (*it2 > *it1)
			{
				it1 = v.insert(it2, *it1);
				eraseFirstNotSorted(v);
				break ;
			}
		}
	}
}

std::vector<int>	merge(std::vector<int>& v1, std::vector<int>& v2)
{
	std::vector<int>	res;
	std::vector<int>::iterator	it1 = v1.begin();
	std::vector<int>::iterator	it2 = v2.begin();

	while (v1.size() > 0 || v2.size() > 0)
	{
		if (v1.size() == 0)
		{
			res.push_back(*it2);
			it2 = v2.erase(it2);
		}
		else if (v2.size() == 0)
		{
			res.push_back(*it1);
			it1 = v1.erase(it1);
		}
		else
		{
			if (*it1 > *it2)
			{
				res.push_back(*it2);
				it2 = v2.erase(it2);
			}
			else
			{
				res.push_back(*it1);
				it1 = v1.erase(it1);
			}
		}
	}
	return (res);
}

void	split(std::vector<int>& v, std::vector<int>& v1, std::vector<int>& v2)
{
	std::vector<int>::iterator	it;
	int 						i = 0;
	int 						s = v.size();

	for(it = v.begin(); it != v.end(); ++it)
	{
		if (i < s / 2)
			v1.push_back(*it);
		else
			v2.push_back(*it);
		i++;
	}
}

std::vector<int>	sort(std::vector<int>& v, int sz)
{
	std::vector<int>	v1;
	std::vector<int>	v2;

	split(v, v1, v2);
	if (v1.size() < sz && v2.size() < sz)
	{
		insertSort(v1);
		insertSort(v2);
	}
	else
	{
		v1 = sort(v1, sz);
		v2 = sort(v2, sz);
	}
	return (merge(v1, v2));
}