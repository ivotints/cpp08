/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivotints <ivotints@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 19:38:31 by ivotints          #+#    #+#             */
/*   Updated: 2024/10/09 11:58:18 by ivotints         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _N(0) {}

Span::Span(unsigned int N) : _N(N) {}

Span::Span(const Span &src) : _N(src._N)
{
	_storage = src._storage;
}

Span::~Span() {}

Span &Span::operator=(const Span &src)
{
	if (this != &src)
	{
		_storage = src._storage;
	}
	return (*this);
}

void Span::addNumber(unsigned int num)
{
	if (_storage.size() >= _N)
		throw ExceptionStorageOverflow();
	_storage.push_back(num);
}



void Span::printNumbers() const
{
	unsigned int len = _storage.size();
	for (unsigned int i = 0; i < len; ++i)
		std::cout << _storage[i] << " ";
	std::cout << "\n";
}

unsigned int Span::shortestSpan() const
{
	if (_storage.size() < 2)
		throw ExceptionSpanCannotBeFound();
	std::vector<unsigned int> sorted = _storage;
	std::sort(sorted.begin(), sorted.end());
	unsigned int minSpan = sorted[1] - sorted[0];
	unsigned int len = sorted.size();
	for (unsigned int i = 2; i < len; ++i)
		if (sorted[i] - sorted[i - 1] < minSpan)
			minSpan = sorted[i] - sorted[i - 1];
	return (minSpan);
}

unsigned int Span::longestSpan() const
{
	if (_storage.size() < 2)
		throw ExceptionSpanCannotBeFound();
	return (*std::max_element(_storage.begin(), _storage.end()) - *std::min_element(_storage.begin(), _storage.end()));
}
