#include <iostream>
#include <fstream>
#include "bigint.hpp"

int main(){
    bigint f;
    f = f.nfact(100); 
    std::cout << "Factorial: " << f << std::endl;
}