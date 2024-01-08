//  Stack class test program
//
//  Tests: Assign operator
//

#include "stack.hpp"
#include <cassert>
#include <iostream>
//#include "string.hpp"

//===========================================================================
int main () {

    {
        stack<int> test;
        stack<int> test2;

        test.push(12);
        test2.push(92);
        test2.push(24);

        test = test2;

        assert(test.pop() == 24);
        assert(test.pop() == 92);
        assert(test.empty());
    }
/*
    {
        stack<String> test;
        stack<String> test2;

        test.push("Hello");
        test2.push("world");
        test2.push('a');

        test = test2;

        assert(test.pop() == 'a');
        assert(test.pop() == "world");
        assert(test.empty());
    }

    {
     	stack<char> test;
        stack<char> test2;

        test.push('A');
        test2.push('b');
        test2.push('a');

        test = test2;

        assert(test.pop() == 'a');
        assert(test.pop() == 'b');
        assert(test.empty());
    }

    {
        //----------------------------------------------------
        // SETUP FIXTURE
        Stack<String> x;

        // TEST
        x.push("I am coding this");

        // VERIFY
        assert(x.top() = "I am coding this");
    }
*/
    {
         std::cout << "testing copyctor\n";
         stack<int> x;
//   stack<int> y;
         x.push(23);
         x.push(33);
         x.push(43);
         stack<int> y;
         y = x;
         std::cout << "the one copied is: \n";
         for(int i = 0; i <= 2; i++){
             std::cout << y.pop() << "  ";
         }
         std::cout << "\nThe original is: \n";
         for(int i = 0; i <= 2; i++){
             std::cout << x.pop() << "  ";
         }
         std::cout << "\n";
     }

std::cout << "Done testing assignment operator." << std::endl;
return 0;

}
