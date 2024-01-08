//  Stack class test program
//
//  Tests: Destructor
//

#include "stack.hpp"
#include <cassert>
#include <iostream>
#include "string.hpp"

//===========================================================================
int main () {

    {
	//Setup
	stack<int> test;

	//Tests
	test.push(24);
	test.push(100);

        stack<int> test2(test);

	//Verify
	assert(test2.top() == 100);

    }

    {
     	//Setup
        stack<String> test;

        //Tests
        test.push("Hello");
        test.push("there!");
	stack<String> test2(test);

        //Verify
        assert(test2.top() == "there!");

    }

    {
     	//Setup
        stack<char> test;


        //Tests
        test.push('a');
        test.push('&');
	stack<char> test2(test);

        //Verify
        assert(test2.top() == '&');

    }


   std::cout << "Done testing destructor." << std::endl;
   return 0;

}
