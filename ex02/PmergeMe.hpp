#ifndef PMERGE_HPP
# define PMERGE_HPP
# include <iostream>
# include <iomanip>
# include <algorithm>
# include <cmath>
# include <set>
# include <ctime>
# include <list>
#include <deque>

template<typename Iterator> void sortcontainer(Iterator begin, Iterator end)
{
	for (Iterator i = begin; i != end; i++)
	{
		Iterator j = i;
        Iterator k = begin;
        while (k != j) {
            if (*k > *j)
                std::iter_swap(j, k);
            k++;
        }
	}
}

template<typename Iterator> void insertmerge(Iterator begin, Iterator end, int cutoff = 10)
{
	if (std::distance(begin, end) <= cutoff)
		sortcontainer(begin, end);
	else
	{
		Iterator middle = begin;
		std::advance(middle, std::distance(begin, end) / 2);
		insertmerge(begin, middle, cutoff);
		insertmerge(middle, end, cutoff);
		std::inplace_merge(begin, middle, end);
	}
}

#endif