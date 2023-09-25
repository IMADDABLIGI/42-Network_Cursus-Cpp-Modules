/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 09:45:36 by idabligi          #+#    #+#             */
/*   Updated: 2023/08/25 08:28:50 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.hpp"

//--------------------------------------------------------------------------//

void    File::setfile(char *path)
{
	std::ifstream openfile(path);

	if (!openfile.is_open())
		ft_error("Opening File, check again !");

	if (std::getline(openfile, store))
		file = store;
	else
		ft_error("File is Empty !");
	while (std::getline(openfile, store))
	{
		file.append("\n");
		file.append(store);
	}
	openfile.close();
	creatfile(path);
}

//--------------------------------------------------------------------------//

const std::string &File::getreffile()
{ return (file); }

//--------------------------------------------------------------------------//

void	File::set_s1_s2(char *S1, char *S2)
{
    s1 = S1;
    s2 = S2;
}

//-----------------------------------------------------------------------//

void    File::ft_write_s2(size_t *i)
{
	ft_write_rfile(s2, -1);
	*i += s1.length();
}

//--------------------------------------------------------------------------//

size_t	File::getpos(size_t i)
{ return (file.find(s1, i)); }

//--------------------------------------------------------------------------//

void	File::creatfile(char *path)
{
	std::string str;
	str = path;
	r_file.open(str.append(".replace"));
	
	if (!r_file.is_open())
		ft_error("Creating File !");
}

//--------------------------------------------------------------------------//

void	File::ft_error(std::string error)
{
	std::cerr << "Error : " + error << std::endl;
	exit (1);
}

//--------------------------------------------------------------------------//

void	File::ft_write_rfile(std::string str, size_t i)
{
	if ((int)i == -1)
		r_file << str;
	else if (str[i] != '\0')
	{	
		r_file << str[i];
	}
}

//--------------------------------------------------------------------------//

void	File::closefile()
{
	r_file.close();
}

//--------------------------------------------------------------------------//
