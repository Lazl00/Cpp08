/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcournoy <lcournoy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 15:18:49 by lcournoy          #+#    #+#             */
/*   Updated: 2025/12/11 15:18:49 by lcournoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    std::list<int> container;

    container.push_back(6);
    container.push_back(7);
    container.push_back(4);
    container.push_back(1);

    // TEST QUI TROUVE
    try {
        std::cout << *(easyfind(container, 1)) << std::endl;
    }
    catch(const std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    // TEST QUI TROUVE PAS
    try {
        std::cout << *(easyfind(container, 42)) << std::endl;
    }
    catch(const std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    
    return 0;
}