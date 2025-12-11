/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcournoy <lcournoy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 15:14:04 by lcournoy          #+#    #+#             */
/*   Updated: 2025/12/11 15:14:04 by lcournoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <algorithm>
# include <list>
# include <stdexcept>


template <typename T>
typename T::iterator easyfind(T& container, int target)
{
    typename T::iterator it = std::find(container.begin(), container.end(), target);
    if (it == container.end())
        throw std::runtime_error("Value not found");
    else
        return it;
}