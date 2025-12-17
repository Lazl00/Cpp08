/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcournoy <lcournoy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 16:45:02 by lcournoy          #+#    #+#             */
/*   Updated: 2025/12/11 16:45:02 by lcournoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    try
    {
        std::cout << "TESTS AJOUT BASIQUES" << std::endl;

        Span sp(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);

        std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest span : " << sp.longestSpan() << std::endl;

        std::cout << "\nTESTS AJOUT VIA IT" << std::endl;

        std::vector<int> values;
        values.push_back(42);
        values.push_back(21);
        values.push_back(84);

        Span sp2(5);
        sp2.addNumbers(values.begin(), values.end());
        sp2.addNumber(10);
        sp2.addNumber(20);

        std::cout << "Shortest span: " << sp2.shortestSpan() << std::endl;
        std::cout << "Longest span : " << sp2.longestSpan() << std::endl;

        std::cout << "\nTEST RANDOM MASSIF (10 000 nombres)" << std::endl;

        srand(time(NULL));

        Span big(10000);
        for (int i = 0; i < 10000; i++)
            big.addNumber(rand());

        std::cout << "Big Span Shortest span: " << big.shortestSpan() << std::endl;
        std::cout << "Big Span Longest span : " << big.longestSpan() << std::endl;

        std::cout << "\nTESTS D'EXCEPTIONS" << std::endl;

        Span sp3(2);
        sp3.addNumber(1);
        sp3.addNumber(2);

        sp3.addNumber(3);
    }
    catch (const std::exception& e)
    {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}