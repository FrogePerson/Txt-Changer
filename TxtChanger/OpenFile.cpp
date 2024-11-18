#include "Functions.h"



bool IsFileGood(std::string& link)
{
	std::cout << "Trying open the file\n";

	std::ifstream ifFile;

	ifFile.open(link);
	if (!ifFile.good())
	{
		return false;

	}

	return true;
}


std::fstream* pOpenedFile()
{
	std::string link;

	std::cout << "Input link to file\n";
	std::getline(std::cin, link);

	while (!IsFileGood(link))
	{
		std::cout << "Try input corret link to file\n";
		std::getline(std::cin, link);
	}
	std::cout << "file opened\n";

	std::fstream* const pFile = new std::fstream;

	pFile->open(link);

	return pFile;
}
