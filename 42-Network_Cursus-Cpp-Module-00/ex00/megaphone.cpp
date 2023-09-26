/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 15:35:42 by idabligi          #+#    #+#             */
/*   Updated: 2023/08/17 15:33:51 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

char	ft_check_lower(char c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}

int main(int ac, char **av)
{
	int i = 1;
	int j;

	if (ac > 1)
	{
		while (av[i])
		{
			if (i != 1)
				std::cout << " ";
			j = 0;
			while (av[i][j])
			{
				av[i][j] = ft_check_lower(av[i][j]);
				std::cout << av[i][j];
				j++;
			}
			i++;
		}
		std::cout << "\n";
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}
