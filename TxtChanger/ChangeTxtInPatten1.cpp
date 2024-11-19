#include "Functions.h"

void ChangeTxtInPattern(std::ifstream& const File, std::string& txt, std::string& pattern, std::string& place)
{
	std::string string;
	std::ofstream newFile;
	const std::regex regPattern(pattern);
	int number;
	

	std::cout << "Input number of this symbol\n";
	std::cin >> number;

	newFile.open("../NewTxtFile.txt");

	std::cout << "Changing the file\n";



	while (std::getline(File, string))
	{
		((std::regex_search(string, regPattern))) ? ChangeString(newFile, txt, string, place, number) : ChangeString(newFile, string);
	}

	newFile.close();
}