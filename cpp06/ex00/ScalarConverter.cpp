/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:39:47 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/11/16 16:40:35 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int identify(std::string arg)
{
	int 	i;
	double 	d;
	std::istringstream	ss(arg);
	std::istringstream 	ss2(arg.substr(0, arg.length() - 1));
	std::istringstream	ss3(arg);

	if (arg == "-inff" || arg == "+inff" || arg == "nanf")
		return FLOAT;

	else if (arg == "-inf" || arg == "+inf" || arg == "nan")
		return DOUBLE;

	ss >> i;
	if (ss.eof() && !ss.fail())
		return INT;

	if (arg.length() == 1 && std::isprint(arg[0]) && !std::isdigit(arg[0]))
		return CHAR;

	ss3 >> d;
	if (ss3.eof() && !ss3.fail())
		return DOUBLE;

	ss2 >> d;
	if (ss2.eof() && !ss2.fail() && arg[arg.length() - 1] == 'f')
		return FLOAT;

	return (-1);
}

void	setDouble(std::string arg, char &c, int& i, float& f, double& d)
{
	d = std::atof(arg.c_str());
	f = static_cast<float>(d);
	i = static_cast<int>(d);
	c = static_cast<char>(d);
}

void	setFloat(std::string arg, char &c, int& i, float& f, double& d)
{
	f = static_cast<float>(std::atof(arg.c_str())); //NON
	d = static_cast<double>(f);
	i = static_cast<int>(f);
	c = static_cast<char>(f);
}

void	setInt(std::string arg, char &c, int& i, float& f, double& d)
{
	i = std::atoi(arg.c_str());
	d = static_cast<double>(i);
	f = static_cast<float>(i);
	c = static_cast<char>(d);
}

void	setChar(std::string arg, char &c, int& i, float& f, double& d)
{
	c = arg.c_str()[0];
	d = static_cast<double>(c);
	f = static_cast<float>(c);
	i = static_cast<int>(c);
}

void	print(char &c, int& i, float& f, double& d)
{
	std::cout << "char: ";
	if (isnan(f) || isinf(f) || i > 127)
		std::cout << "impossible";
	else if (c < 32)
		std::cout << "Non displayable";
	else
		std::cout << c;
	std::cout << std::endl;

	std::cout  << "int: ";
	if (isnan(f) || isinf(f) || d > static_cast<double>(std::numeric_limits<int>::max()))
		std::cout << "impossible";
	else
		std::cout << i;
	std::cout << std::endl;

	std::cout << "float: ";
	std::cout << f;
	if (f - i == 0)
		std::cout << ".0";
	std::cout << "f" << std::endl;

	std::cout << "double: ";
	std::cout << d;
	if (d - i == 0)
		std::cout << ".0";
	std::cout << std::endl;

}

void	ScalarConverter::convert(std::string toConvert)
{
	char 	c;
	int 	i;
	float 	f;
	double	d;
	int 	type;

	type = identify(toConvert);
	std::cout << "Result of identify: " << type << std::endl;

	switch(type)
	{
		case CHAR:
			setChar(toConvert, c, i, f, d);
			break;
		case INT:
			setInt(toConvert, c, i, f, d);
			break;
		case FLOAT:
			setFloat(toConvert, c, i, f, d);
			break;
		case DOUBLE:
			setDouble(toConvert, c, i, f, d);
			break;
		default:
			std::cout << "Invalid argument" << std::endl;
			return ;
	}
	print(c, i, f, d);
}
