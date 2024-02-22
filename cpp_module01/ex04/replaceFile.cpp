/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replaceFile.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: about <about@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 18:02:17 by about             #+#    #+#             */
/*   Updated: 2023/11/08 21:41:17 by about            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"replaceFile.hpp"

std::string replaceFile::_replaceEach(const std::string &input, const std::string &s1,const std::string &s2)
{
    std::string Newformat;
    size_t position = 0;
    size_t lastposition = 0;
    while((position = input.find(s1, lastposition)) != std::string::npos)
    {
        Newformat += input.substr(lastposition, position - lastposition) + s2;
        lastposition = position + s1.length();
    }
    Newformat += input.substr(lastposition);
    return (Newformat);
}

bool replaceFile::openInput()
{
    _Inputfile.open(Filename_.c_str());
    return(_Inputfile.is_open());
}

bool replaceFile::createOutput()
{
    _NewFileName = Filename_ + ".replace";
    _Outputfile.open(_NewFileName.c_str());
    return(_Outputfile.is_open());
}

void    replaceFile::_replaceThenSave()
{
    if(!openInput())
    {
        std::cerr << "Error : file not opened " << Filename_ << std::endl;
        return ;
    }
    
    std::string Content;
    std::string line;
    while(std::getline(_Inputfile, line))
        Content += line + "\n";
    _Inputfile.close();
    if(_s1 == "")
    {
        if(!createOutput())
        {
            std::cerr << "Error : output file not created " << _NewFileName << std::endl;
            return ;
        }
        _Outputfile << Content;
        _Outputfile.close();
        std::cout << "File content replaced and saved as " << _NewFileName << std::endl;
        return ;
    }
    Content = _replaceEach(Content, _s1, _s2);
    
    if(!createOutput())
    {
        std::cerr << "Error : output file not created " << _NewFileName << std::endl;
        return ;
    }
    _Outputfile << Content;
    _Outputfile.close();
    std::cout << "File content replaced and saved as " << _NewFileName << std::endl;
}



