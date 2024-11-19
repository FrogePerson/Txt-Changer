#include "Functions.h"

void ChangeString(std::ofstream& newFile, const std::string& txt, const std::string& string, const std::string& place, const int number)
{
	int numberOfneedSymbol = 0;

	for (int numberOfSymbol = 0; numberOfSymbol < string.length(); numberOfSymbol++)
	{
		newFile << string.at(numberOfSymbol);

		if (string.at(numberOfSymbol) == place.at(0))
		{

			if (numberOfneedSymbol == number)
			{
				newFile << txt;
			}

			numberOfneedSymbol++;

		}

		if (numberOfSymbol + 1 == string.length())
		{
			newFile << "\n";
		}

	}
}
