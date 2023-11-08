/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replaceFile.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: about <about@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 18:02:19 by about             #+#    #+#             */
/*   Updated: 2023/11/06 18:33:30 by about            ###   ########.fr       */
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
		std::string _Filename;
		std::string _s1;
		std::string _s2;
		std::string _NewFileName;

	public :
		replaceFile(const std::string &filename, const std::string &s1, const std::string &s2)
			: _Filename(filename), _s1(s1), _s2(s2) {}
		std::string _replaceEach(const std::string &input, const std::string &s1,const std::string &s2);
		
		bool openInput();
		bool createOutput();
		void _replaceThenSave();
};