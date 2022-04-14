// main check if one argument only
#include <iostream>

bool isChar(std::string str)
{
	if (str.length() == 1 && !isdigit(str[0]))
		return true;
	return false;
}
void    printChar(std::string str)
{
	std::cout << "char: " << str << std::endl;
	std::cout << "int: " << "impossible" << std::endl;
	std::cout << "float: " << "impossible" << std::endl;
	std::cout << "double: " << "impossible" << std::endl;
}

bool isInt(std::string str)
{
	//  check if string is a number
	for (unsigned int i = 0; i < str.length(); i++)
	{
		if (!isdigit(str[i]))
		{
			if (str[0] == '-' && i == 0)
				continue;
			return false;
		}
	}
	try
	{
		std::stoi(str);
		return true;
	}
	catch (std::exception &e)
	{
		return false;
	}
}

void	printInt(std::string str)
{
	int n = std::stoi(str);
	// if n displayable as character
	if (n >= 0 && n <= 127)
		if (n >= 33 && n <= 126)
			std::cout << "char: " << static_cast<char>(n) << std::endl;
		else
			std::cout << "char: " << "non displayable" << std::endl;
	else
		std::cout << "char: " << "impossible" << std::endl;

	std::cout << "int: " << n << std::endl;
	std::cout << "float: " << n << ".0f" << std::endl;
	std::cout << "double: " << n << ".0" << std::endl;
}
bool	isFloat(std::string str)
{
	// check if nanf or inf
	if (str == "nanf" || str == "inff" || str == "-inff")
		return true;
	if (str[str.length() - 1] != 'f')
		return false;
	str.pop_back();
	for (unsigned int i = 0; i < str.length(); i++)
	{
		if (!isdigit(str[i]) && str[i] != '.')
		{
			if (str[0] == '-' && i == 0)
				continue;
			return false;
		}
	}
	try
	{
		std::stof(str);
		return true;
	}
	catch (std::exception &e)
	{
		return false;
	}
}

void printFloat(std::string str)
{
	if (str == "nanf" || str == "inff" || str == "-inff")
	{
		str.pop_back();
		std::cout << "char: " << "impossible" << std::endl;
		std::cout << "int: " << "impossible" << std::endl;
		std::cout << "float: " << str << "f" << std::endl;
		std::cout << "double: " << str << std::endl;
		return ;
	}
	float n = std::stof(str);
	// if n displayable as character
	if (n >= 0 && n <= 127)
		if (n >= 33 && n <= 126)
			std::cout << "char: " << static_cast<char>(n) << std::endl;
		else
			std::cout << "char: " << "non displayable" << std::endl;
	else
		std::cout << "char: " << "impossible" << std::endl;

	std::cout << "int: " << static_cast<int>(n) << std::endl;
	std::cout << "float: " << n << "f" << std::endl;
	std::cout << "double: " << n  << std::endl;
}

bool isDouble(std::string str)
{
	// check if nan or inf
	if (str == "nan" || str == "inf" || str == "-inf")
		return true;
	for (unsigned int i = 0; i < str.length(); i++)
	{
		if (!isdigit(str[i]) && str[i] != '.')
		{
			if (str[0] == '-' && i == 0)
				continue;
			return false;
		}
	}
	try
	{
		std::stod(str);
		return true;
	}
	catch (std::exception &e)
	{
		return false;
	}
}

void printDouble(std::string str)
{
	if (str == "nan" || str == "inf" || str == "-inf")
	{
		std::cout << "char: " << "impossible" << std::endl;
		std::cout << "int: " << "impossible" << std::endl;
		std::cout << "float: " << str << "f" << std::endl;
		std::cout << "double: " << str << std::endl;
		return ;
	}
	double n = std::stod(str);
	// if n displayable as character
	if (n >= 0 && n <= 127)
		if (n >= 33 && n <= 126)
			std::cout << "char: " << static_cast<char>(n) << std::endl;
		else
			std::cout << "char: " << "non displayable" << std::endl;
	else
		std::cout << "char: " << "impossible" << std::endl;

	std::cout << "int: " << static_cast<int>(n) << std::endl;
	std::cout << "float: " << static_cast<float>(n) << "f" << std::endl;
	std::cout << "double: " << n << std::endl;
}

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cout << "Usage: ./convert \"literal\"" << std::endl;
		return (1);
	}
	if (isChar(argv[1]))
		printChar(argv[1]);
	else if (isInt(argv[1]))
		printInt(argv[1]);
	else if (isFloat(argv[1]))
		printFloat(argv[1]);
	else if (isDouble(argv[1]))
		printDouble(argv[1]);
	else
		std::cout << "impossible" << std::endl;
	return (0);
}