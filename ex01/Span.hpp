/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcournoy <lcournoy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 16:45:04 by lcournoy          #+#    #+#             */
/*   Updated: 2025/12/11 16:45:04 by lcournoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <vector>
# include <algorithm>
# include <climits>
# include <stdexcept>
# include <cstdlib>
# include <ctime>

class Span
{
    private:
        unsigned int        _N;
        std::vector<int>    _data;

    public:
        Span(unsigned int N);
        Span(const Span& other);
        Span& operator=(const Span& other);
        ~Span();

        void addNumber(int n);

        template <typename It>
        void addNumbers(It begin, It end)
        {
            size_t currentSize = _data.size();
            size_t rangeSize = std::distance(begin, end);

            if (currentSize + rangeSize > _N)
                throw std::runtime_error("Cannot add other numbers, Span is full.");

            _data.insert(_data.end(), begin, end);
        }

        int shortestSpan();
        int longestSpan();
};