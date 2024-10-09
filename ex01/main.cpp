/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivotints <ivotints@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 15:46:55 by ivotints          #+#    #+#             */
/*   Updated: 2024/10/09 12:03:16 by ivotints         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#define N 10

int main()
{
	try
	{

	Span storage(N * 2);
	srand(static_cast<long>(time(NULL)));

	for (int i = 0; i < N; ++i)
		storage.addNumber(rand() % (N*10));
	std::cout << storage.shortestSpan() << std::endl;
	std::cout << storage.longestSpan() << std::endl;

	Span storag(3);
	try
	{
		storag.addNumber(999);
		storag.addNumber(99);
		storag.addNumber(9);
	std::cout << storag.longestSpan() << std::endl;
	std::cout << storag.shortestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::vector<int> nums;
	nums.push_back(1);
	nums.push_back(2);
	nums.push_back(3);
	storage.printNumbers();
	storage.addNumbers(nums.begin(), nums.end());
	storage.printNumbers();
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}
