
//  Stack class test program
//
//  Tests: Default constructor
//

#include <iostream>
#include "stack.hpp"
#include <cassert>
#include "string.hpp"

//===========================================================================
int main () {

    {
        stack<int> test;

        assert(test.empty());
    }

    {
        stack<String> test;

        assert(test.empty());
    }

    {
     	stack<char> test;

        assert(test.empty());
    }


std::cout << "Done testing default constructor." << std::endl;
return 0;

}
