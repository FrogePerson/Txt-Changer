#include "Functions.h"


int main()
{
    std::fstream* pFile;

    std::string pattern, txt, place;

    pFile = pOpenedFile();

    std::cout << "Input txt\n";
    std::getline(std::cin, txt);

    std::cout << "Input pattern\n";
    std::getline(std::cin, pattern);

    std::cout << "Input after what input ur txt or press enter if u want change all string\n";
    std::getline(std::cin, place);

    place.empty() ? ChangeTxtInPattern(*pFile, txt, pattern) : ChangeTxtInPattern(*pFile, txt, pattern, place);
 
    

    pFile->close();
}


