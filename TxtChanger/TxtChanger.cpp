#include <iostream>
#include <string>

void OpenFile(std::string linkToFile);

void ChangeTxtInPattern(std::string txt, std::string pattern, std::string place);

void ChangeTxtInPattern(std::string txt, std::string pattern);


int main()
{
    std::string link, pattern, place;

    std::cout << "Input link to file\n";
    std::getline(std::cin, link);

    std::cout << "Input Pattern\n";
    std::getline(std::cin, pattern);

    std::cout << "Input Place or press enter if u want change all string\n";
    std::getline(std::cin, place);

}


