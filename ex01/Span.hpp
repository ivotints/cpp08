/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivotints <ivotints@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 16:22:09 by ivotints          #+#    #+#             */
/*   Updated: 2024/10/09 11:58:30 by ivotints         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <cstdlib>
#include <ctime>
#include <exception>
#include <limits>

class Span
{
	private:
		const unsigned int _N;
		std::vector<unsigned int> _storage;
		Span();


	public:
		Span(unsigned int N);
		~Span();
		Span(const Span &src);
		Span &operator=(const Span &src);

		void addNumber(unsigned int num);
		template <typename T>
		void addNumbers(T begin, T end);
		unsigned int shortestSpan() const;
		unsigned int longestSpan() const;
		void printNumbers() const;
		class ExceptionStorageOverflow : public std::exception
		{
			const char *what() const throw() {return ("Span storage owerflow.");}
		};
		class ExceptionSpanCannotBeFound : public std::exception
		{
			const char *what() const throw() {return ("Span can not be found.");}
		};
};

template <typename T>
void Span::addNumbers(T begin, T end)
{
	if (std::distance(begin, end) + _storage.size() > _N)
		throw ExceptionStorageOverflow();
	_storage.insert(_storage.end(), begin, end);
}
