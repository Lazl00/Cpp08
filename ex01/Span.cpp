/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcournoy <lcournoy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 16:44:59 by lcournoy          #+#    #+#             */
/*   Updated: 2025/12/11 16:44:59 by lcournoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Span.hpp"

Span::Span(unsigned int N) : _N(N) {}

Span::Span(const Span& other) : _N(other._N), _data(other._data) {}

Span& Span::operator=(const Span& other){
    if (this != &other) {
        _N = other._N;
        _data = other._data;
    }
    return *this;
}

Span::~Span() {}

void Span::addNumber(int n)
{
    if (_data.size() >= _N)
        throw std::runtime_error("Cannot add another number, Span is full.");
    _data.push_back(n);
}

int Span::shortestSpan()
{
    if (_data.size() < 2)
        throw std::runtime_error("Not enough numbers");
}   

int Span::longestSpan()
{
    if (_data.size() < 2)
        throw std::runtime_error("Not enough numbers");

    int min = *(std::min_element(_data.begin(), _data.end()));
    int max = *(std::max_element(_data.begin(), _data.end()));
    return (max - min);
}