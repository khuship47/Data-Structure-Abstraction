// bigint Test Program
//
// Tests:  subscript, uses ==
//
// NEED TO IMPLEMENT
//
#include <iostream>
#include <cassert>
#include "bigint.hpp"

//===========================================================================
int main () {
    
    {
        // Setup
        bigint bi(4);

        // Test 
        int digit = bi[0];

        // Verify
        assert(bi    == 4);  //Wrong.  Will FAIL.  Fix and add test cases.
        assert(digit == 4); //fixed
    }
    
    //Add test cases!!
    {
        // Setup
        bigint bi("87654321222112");

        // Test 
        int digit = bi[6];

        // Verify
        assert(bi    == "87654321222112");  
        assert(digit == 1);
    }

    {
        // Setup
        bigint bi(2345);

        // Test 
        int digit = bi[2];

        // Verify
        assert(bi    == 2345);  
        assert(digit == 3);
    }

    {
        // Setup
        bigint bi(2345);

        // Test 
        int digit = bi[0];

        // Verify
        assert(bi    == 2345);  //Wrong.  Will FAIL.  Fix and add test cases.
        assert(digit == 5);
    }
    

    std::cout << "Done testing subscript." << std::endl;
    return 0;
}

