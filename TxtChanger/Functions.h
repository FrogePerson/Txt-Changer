#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <regex>


std::fstream* pOpenedFile();

void ChangeTxtInPattern(std::fstream& const File, std::string& txt, std::string& pattern, std::string& place);

void ChangeTxtInPattern(std::fstream& const File, std::string& txt, const std::string& pattern);
