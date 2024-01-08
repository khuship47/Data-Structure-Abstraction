#include <iostream>
#include <fstream>
#include "bigint.hpp"

int main(){
    std::ifstream in("data1-2.txt");    // Define stream for input
    if(!in) {                           // Make sure it opened correctly.
        std::cerr << "Could not open data1-1.txt, exiting." << std::endl;
        exit(1);
    }
    bigint num_1, num_2, result;

    while(in >> num_1 >> num_2){
        result = num_1 * num_2;
        std::cout << "Number-1: " << num_1 << std::endl;
        std::cout << "Number-2: " << num_2 << std::endl;
        std::cout << "Result: " << result << std::endl;

        std::cout << std::endl;
    }

}