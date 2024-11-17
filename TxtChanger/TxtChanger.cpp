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
 
    ChangeTxtInPattern(*pFile, txt, pattern);

    std::cout << "Input place or press enter if u want change all string\n";
    std::getline(std::cin, place);


    pFile->close();

}


