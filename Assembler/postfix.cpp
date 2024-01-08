#include "stack.hpp"
#include "string.hpp"
#include "utilities.hpp"
#include <iostream>
#include <fstream>

int main(int argc, char *argv[]){

    std::ifstream input(argv[1]);
    std::ofstream output(argv[2]);

    if(argc < 2){
        std::cout << "No file mentioned." << std::endl;
        return 1;
    }
    if(!input){
        std::cout << "Input file can not be opened." << std::endl;
        return 1;
    }

    String temp = "";
    char ch;

    while(input.get(ch)){
        //input.get(ch);

        if(ch != ';' && ch != '\n'){
            temp += ch;
        }

        if(ch ==';'){
            temp += ch;
        
            if(output){
                output << "Infix expression: " << temp;
                output << "Infix to Postfix: " << infixToPostfix(temp) << std::endl;
            }
            else{
                std::cout << "Infix expression: " << temp;
                std::cout << "Infix to Postfix: " << infixToPostfix(temp) << std::endl;
            }
            temp = "";
        }
    }
    input.close();
    output.close();
}

