/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivotints <ivotints@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 15:46:55 by ivotints          #+#    #+#             */
/*   Updated: 2024/09/23 12:33:16 by ivotints         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#define N 10


/* int main()
{
	MutantStack<int> MS;

	MS.push(1);
	MS.push(2);
	MS.push(6);
	MS.push(7);
	MS.push(8);
	MS.push(9);
	MS.push(10);

	for (MutantStack<int>::iterator it = MS.begin(); it != MS.end(); ++it)
		std::cout << *it << std::endl;
} */

int main()
{
	MutantStack<int> MS;

	MS.push(1);
	MS.push(2);
	MS.push(6);
	MS.push(7);
	MS.push(8);
	MS.push(9);
	MS.push(10);

	for (MutantStack<int>::const_iterator it = MS.begin(); it != MS.end(); ++it)
		std::cout << *it << std::endl;
}
