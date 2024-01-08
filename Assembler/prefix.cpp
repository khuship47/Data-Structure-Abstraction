#include "utilities.hpp"
#include "stack.hpp"
#include "string.hpp"
#include <iostream>
#include <fstream>

int main(int argc, char *argv[]) {

    std::ifstream in(argv[1]);
    std::ofstream out(argv[2]);
    
    if (argc < 2) {
        std::cerr << "File name not mentioned!" << std::endl; 
        return 1;
    }

    if (!in) {
	    std::cerr << "Can't open!" << argv[1] << std::endl; 
        return 1;
    }

    String temp, pref;
    char ch;

    while(in.get(ch)) {
        if(ch != ';' && ch != '\n' && ch!= '\r') {
            temp += ch;
        }

        if(ch == ';') {
            temp += ch;

            if(out){
                pref = infixToPrefix(temp);
                out << "Infix Expression: " << temp;
                out << "Prefix Expression: " << pref << std::endl;
                prefixToAssembly(pref, out);
                out << std::endl;
            }
            else {
                pref = infixToPrefix(temp);
                std::cout << "Infix Expression: " << temp;
                std::cout << "Prefix Expression: " << pref << std::endl;
                prefixToAssembly(pref, std::cout);
                std::cout << std::endl;
            }
            temp = "";
        }
    }
}


