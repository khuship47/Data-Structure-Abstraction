// bigint Test Program
//
// Tests:  int constructor, uses ==
//
// NEED TO IMPLEMENT
//
#include <iostream>
#include <cassert>
#include "bigint.hpp"


//===========================================================================
int main () {
    {

        // VERY INCOMPLETE set of tests.


        //------------------------------------------------------
        // Setup fixture
        bigint left(0);
        bigint right(0);
        bigint result;

        // Test 
        result = left + right;

        // Verify
        assert(left   == 0);
        assert(right  == 0);
        assert(result == 0);
    }

    {
      //------------------------------------------------------
      // Setup fixture
      bigint left(1);
      bigint right(0);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 1);
      assert(right  == 0);
      assert(result == 1);
    }
    {
      //------------------------------------------------------
      // Setup fixture
      bigint left(1);
      bigint right(1);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 1);
      assert(right  == 1);
      assert(result == 2);
    }

    assert(2 == 2); //WRONG. This will fail, of course. //fixed
                    //You need to add more test cases here. Remove this assert.

    
    //Add test cases as needed.
    {
      //------------------------------------------------------
      // Setup fixture
      bigint left(4563);
      bigint right(1);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 4563);
      assert(right  == 1);
      assert(result == 4564);
    }

    {
      //------------------------------------------------------
      // Setup fixture
      bigint left("11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111");
      bigint right(1);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111");
      assert(right  == 1);
      assert(result == "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111112");
    }

    {
      //------------------------------------------------------
      // Setup fixture
      bigint left("12345678");
      bigint right("9087654321");
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == "12345678");
      assert(right  == "9087654321");
      assert(result == "9099999999");
    }

    
  std::cout << "Done with testing addition." << std::endl;
  return 0;
}

