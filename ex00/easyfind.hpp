/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivotints <ivotints@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 16:22:09 by ivotints          #+#    #+#             */
/*   Updated: 2024/09/21 18:08:40 by ivotints         ###   ########.fr       */
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

class NotFoundException : public std::exception
{
	public:
		const char *what() const throw() {return ("Element not found in the container");}
};

template <typename T>
typename T::iterator easyfind(T &container, int value)
{
	typename T::iterator it = std::find(container.begin(), container.end(), value);

	if (it == container.end())
		throw NotFoundException();
	return (it);
}
