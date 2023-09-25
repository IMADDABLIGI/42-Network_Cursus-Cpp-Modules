/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 13:22:30 by idabligi          #+#    #+#             */
/*   Updated: 2023/08/25 08:34:19 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.hpp"

//-----------------------------------------------------------------------//

int main(int ac, char **av)
{
	File 			obj;
	std::string		file;
	std::ofstream	r_file;
	size_t      	pos;
	size_t 			i = 0;

	if (ac == 4)
	{
		obj.setfile(av[1]);
		file = obj.getreffile();
		obj.set_s1_s2(av[2], av[3]);
		pos = obj.getpos(i);
		while (file[i])
		{
			if (pos == i)
			{
				obj.ft_write_s2(&i);
				pos = obj.getpos(i);
			}
			obj.ft_write_rfile(file , i);
			i++;
		}
		obj.closefile();
	}
	else
		obj.ft_error("Arguments !");
	return 0;
}