#include "Functions.h"

void ChangeTxtInPattern(std::ifstream& const File, std::string& txt, const std::string& pattern)
{
	std::string string;
	std::ofstream newFile;
	const std::regex regPattern(pattern);

	newFile.open("../NewTxtFile.txt");
	
	std::cout << "Changing the file\n";
	
	

	while (std::getline(File, string))
	{
		((std::regex_search(string, regPattern))) ? ChangeString(newFile, txt): ChangeString(newFile, string);
	}

	newFile.close();

}