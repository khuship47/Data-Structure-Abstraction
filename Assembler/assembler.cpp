#include "utilities.hpp"
#include "stack.hpp"
#include <iostream>
#include <fstream>

int main(int argc, char *argv[]) {

    std::ifstream in(argv[1]);
    std::ofstream out(argv[2]);

    if (argc < 2) {
        std::cerr << "File name not mentioned!" << std::endl; exit(0);
    }

    if (!in) {
	    std::cerr << "Can't open!" << argv[1] << std::endl; exit(0);
    }

    String s,temp, pf, pref;
    char ch;

    while(in.get(ch)) {
      if(ch != ';' && ch != '\n' && ch!= '\r') {
         temp += ch;
      }

      if(ch == ';') {
         temp += ch;

          if(out){
            pf = infixToPostfix(temp);
            out << "Infix Expression: " << temp;
            out << "Postfix Expression: " << pf << std::endl;
            postfixToAssembly(pf, out);
            out << std::endl;
          }
          else {
            pf = infixToPostfix(temp);
            std::cout << "Infix Expression: " << temp;
            std::cout << "Postfix Expression: " << pf << std::endl;
            postfixToAssembly(pf, std::cout);
            std::cout << std::endl;
          }
        temp = "";
      }
    }
}
