// bigint Test Program
//
// Tests:  times_10, uses ==
//
// NEED TO IMPLEMENT
//
#include <iostream>
#include <cassert>
#include "bigint.hpp"

//===========================================================================
int main () {
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(3);

        // Test 
        bi = bi.times10(0);
        
        // Verify
        assert(bi == 3);  //Wrong. Will FAIL, fix and add tests cases //fixed
    }
    
    //Add test cases as needed.

    std::cout << "Done testing times_10" << std::endl;
    return 0;
}

