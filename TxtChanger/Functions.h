#pragma once
#include <iostream>
#include <string>
#include <fstream>


std::fstream* pOpenedFile();

void ChangeTxtInPattern(std::string& txt, std::string& pattern, std::string& place);

void ChangeTxtInPattern(std::string& txt, std::string& pattern);
