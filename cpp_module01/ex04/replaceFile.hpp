/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replaceFile.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: about <about@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 18:02:19 by about             #+#    #+#             */
/*   Updated: 2023/11/08 21:35:57 by about            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

class replaceFile {
	private :
		std::ifstream _Inputfile;
		std::ofstream _Outputfile;
		std::string Filename_;
		std::string _s1;
		std::string _s2;
		std::string _NewFileName;

	public :
		replaceFile(const std::string &filename, const std::string &s1, const std::string &s2)
			: Filename_(filename), _s1(s1), _s2(s2) {}
		std::string _replaceEach(const std::string &input, const std::string &s1,const std::string &s2);
		
		bool openInput();
		bool createOutput();
		void _replaceThenSave();
};