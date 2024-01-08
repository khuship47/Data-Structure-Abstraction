//  Stack class test program
//
//  Tests: Copy Constructor
//

#include "stack.hpp"
#include <cassert>
#include <iostream>
#include "string.hpp"

//===========================================================================
void test_copy_ctor_int(stack<int> copy_stack) {
    assert(copy_stack.pop() == 12);
    assert(copy_stack.pop() == 2);
    assert(copy_stack.empty());
}

void test_copy_ctor_Sting(stack<String> copy_stack) {
    assert(copy_stack.pop() == "World!");
    assert(copy_stack.pop() == "Hello");
    assert(copy_stack.empty());
}


int main () {

    {
        stack<int> test;

        test.push(2);
        test.push(12);
        test_copy_ctor_int(test);

        assert(test.pop() == 12);
        assert(test.pop() == 2);
        assert(test.empty());
    }

    {
        stack<String> test;

        test.push("Hello");
        test.push("World!");
        test_copy_ctor_Sting(test);

        assert(test.pop() == "World!");
        assert(test.pop() == "Hello");
        assert(test.empty());
    }

     {
     	stack<char> test;

        test.push('a');
        test.push('!');

        stack<char> test2(test);

        assert(test2.pop() == '!');
        assert(test2.pop() == 'a');
        assert(test2.empty());
    }



std::cout << "Done testing copy constructor." << std::endl;
return 0;

}
