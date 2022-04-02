#include <iostream>
#include <fstream>

int main(int argc, char const *argv[])
{
	if (argc != 4)
	{
		std::cerr << "need 3 arguments" << std::endl;
		return (1);
	}
	if (!argv[1][0] || !argv[2][0] || !argv[3][0])
	{
		std::cerr << "no empty arguments" << std::endl;
		return (1);
	}
	std::ifstream InputFile;
	std::ofstream OutputFile;
	std::string line;
	std::string OutputName = (std::string)argv[1] + ".replace";

	InputFile.open(argv[1], std::ios::in);
	if (!InputFile.is_open())
	{
		std::cerr << "error opening input files" << std::endl;
		return (1);
	}
	OutputFile.open(OutputName.c_str(), std::ios::out);
    if (!OutputFile.is_open())
    {
        std::cerr << "error opening Output files" << std::endl;
        return (1);
    }	
	while (getline(InputFile, line))
	{
		for(size_t i = 0; i < line.length(); i++)
		{
			int index = line.substr(i, line.length()).find(argv[2]);
			if (index == -1)
			{
				OutputFile << line.substr(i, line.length() - i);
				break;
			}
			else
			{
				OutputFile << line.substr(i, index);
				OutputFile << argv[3];
			}
			i = i + index + ((std::string)argv[2]).length() - 1;
		}
		if (InputFile.peek() == EOF)
			break;    
		OutputFile << std::endl;
	}
	InputFile.close();
	OutputFile.close();
	return 0;
}