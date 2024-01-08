//Tests: This file is testing thre input operator

#include <iostream>
#include <fstream>
#include <cassert>
#include "string.hpp"

int main() {

std::ifstream file ("file_input.txt");
	if(!file.is_open()) {
		std::cout << "Unable to open file \n";
}

char ch;
file.get(ch);
while(!file.eof()) {
    if(ch == ' ') std::cout << " ";
    else
    std:: cout << ch;
    file.get(ch);
}

file.close();

std::cout << "Done testing the input operator." << std::endl;
}
