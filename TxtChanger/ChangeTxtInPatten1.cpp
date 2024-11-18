#include "Functions.h"

inline void ChangeString(std::ofstream& newFile, std::string& txt, std::string& place)
{
	newFile << "KALLLLLL" << "\n";
}

void ChangeTxtInPattern(std::fstream& const File, std::string& txt, std::string& pattern, std::string& place)
{
	std::string string;
	std::ofstream newFile;
	const std::regex regPattern(pattern);

	newFile.open("NewTxtFile.txt");

	std::cout << "Changing the file\n";



	while (std::getline(File, string))
	{
		((std::regex_search(string, regPattern))) ? ChangeString(newFile, txt, place) : ChangeString(newFile, string, place);
	}

	newFile.close();
}