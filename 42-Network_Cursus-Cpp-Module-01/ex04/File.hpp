/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 09:36:24 by idabligi          #+#    #+#             */
/*   Updated: 2023/08/24 13:23:44 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_HPP
# define FILE_HPP

#include <iostream>
#include <fstream>
#include <string>

class   File
{
	private:
		std::string 	file;
		std::ofstream 	r_file;
		std::string		store;
		std::string		s1;
		std::string		s2;

	public:
		void	setfile(char *str);
		const 	std::string &getreffile();
		void	set_s1_s2(char *S1, char *S2);
		void    ft_write_s2(size_t *i);
		size_t	getpos(size_t i);
		void	creatfile(char *path);
		void	ft_error(std::string error);
		void	ft_write_rfile(std::string str, size_t i);
		void	closefile();
};

#endif