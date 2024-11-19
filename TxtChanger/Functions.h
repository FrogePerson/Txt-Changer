#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <regex>


std::ifstream* pOpenedFile();

inline void ChangeString(std::ofstream& newFile, const std::string& txt)
{
	newFile << txt << "\n";
}
void ChangeString(std::ofstream& newFile, const std::string& txt, const std::string& string, const std::string& place, const int number);

void ChangeTxtInPattern(std::ifstream& const File, std::string& txt, std::string& pattern, std::string& place);
void ChangeTxtInPattern(std::ifstream& const File, std::string& txt, const std::string& pattern);
