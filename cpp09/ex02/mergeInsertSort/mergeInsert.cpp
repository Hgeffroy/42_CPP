/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mergeInsert.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 14:03:32 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/11/20 10:58:27 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include "

static void	eraseFirstNotSorted(std::vector<int>& v)
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

static void	insertSort(std::vector<int>& v) // 5 2, 5 2 6 8
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

static std::vector<int>	merge(std::vector<int>& v1, std::vector<int>& v2)
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

std::vector<int>	mergeInsertSort(std::vector<int>& v, int sz)
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