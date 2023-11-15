/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 16:56:02 by idabligi          #+#    #+#             */
/*   Updated: 2023/11/15 11:05:13 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
    private:
        unsigned int _size;
        std::vector<int> vec;

    public:
        Span();
        Span(unsigned int size);
        Span(const Span &org_obj);
        Span &operator=(const Span &org_obj);
        ~Span();

        void    addNumber(int num);
        void    addMAnyNumbers(int num, unsigned int size);
        int     shortestSpan();
        int     longestSpan();
        void     checkSpanSize();

		class MaxSize : public std::exception
		{
			public:
			const char* what() const throw();
		};
};
