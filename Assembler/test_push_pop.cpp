
//TEST: push and pop


#include "stack.hpp"
#include "string.hpp"
#include <cassert>
#include <iostream>

//===========================================================================
int main ()
{

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<int> x;

        // TEST
        x.push(56);
        x.push(100);

        // VERIFY
        assert(x.top() == 100);
     }

     {
     	//------------------------------------------------------
        // SETUP FIXTURE
        stack<String> x;

        // TEST
        x.push("Test");
        x.push("!");

        // VERIFY
        assert(x.top() == '!');
	assert(x.pop() == '!');
	assert(x.pop() == "Test");
	assert(x.empty());
     }

     {
      	//------------------------------------------------------
        // SETUP FIXTURE
        stack<String> x;

        // TEST
        x.push("Test");
        x.push('!');

        // VERIFY
        assert(x.top() == '!');
        assert(x.pop() == '!');
        assert(x.pop() == "Test");
        assert(x.empty());
     }

     {
     	//------------------------------------------------------
        // SETUP FIXTURE
        stack<int> x;

        // TEST
        x.push(56);
        x.push(100);
	x.push(7);

        // VERIFY
        assert(x.top() == 7);
	assert(x.pop() == 7);
	assert(x.top() == 100);
     }

     {
     	//------------------------------------------------------
        // SETUP FIXTURE
        stack<int> x;

        // TEST
        x.push(56);
        x.push(100);

        // VERIFY
        assert(x.top() == 100);
     }

     {
     	//------------------------------------------------------
        // SETUP FIXTURE
        stack<int> x;

        // TEST
        x.push(56);
        x.push(100);

        // VERIFY
        assert(x.top() == 100);
	assert(x.pop() == 100);
	assert(x.pop() == 56);
	assert(x.empty());
     }

     {
     	//------------------------------------------------------
        // SETUP FIXTURE
        stack<int> x;

        // TEST
        x.push(56);
        x.push(100);

        // VERIFY
        assert(x.top() == 100);
     }

     {
	//------------------------------------------------------
        // SETUP FIXTURE
        stack<int> test;

	//TEST
	//VERIFY
        assert(test.empty());
    }

    {
	//------------------------------------------------------
        // SETUP FIXTURE
        stack<int> test;

	//TEST
        test.push(12);
        test.push(78);

	//VERIFY
        assert(test.pop() == 78);
        assert(test.top() == 12);
    }

    {
	//------------------------------------------------------
        // SETUP FIXTURE
        stack<int> test;

	//TEST
        test.push(2);
        test.push(12);

	//VERIFY
        assert(test.pop() == 12);
        assert(test.pop() == 2);
        assert(test.empty());
    }

    {
     	//------------------------------------------------------
        // SETUP FIXTURE
        stack<char> x;

        // TEST
        x.push('a');
        x.push('b');

        // VERIFY
        assert(x.top() == 'b');
     }

     {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<char> x;

        // TEST
        x.push('a');
        x.push('a');

        // VERIFY
        assert(x.top() == 'a');
	assert(x.pop() == 'a');
	assert(x.top() == 'a');
	assert(x.pop() == 'a');
	assert(x.empty());
     }

     {
     	//------------------------------------------------------
        // SETUP FIXTURE
        stack<char> x;

        // TEST
        x.push('a');
        x.push('A');

        // VERIFY
        assert(x.top() == 'A');
	assert(x.pop() == 'A');
	assert(x.pop() == 'a');
	assert(x.empty());
     }

     {
	//------------------------------------------------------
        // SETUP FIXTURE
        stack<int> test;
        stack<int> test2;

	//TEST
        test.push(12);
        test2.push(92);
        test2.push(24);

        test = test2;

	//VERIFY
        assert(test.pop() == 24);
        assert(test.pop() == 92);
        assert(test.empty());
    }

    {
        stack<String> test;

        assert(test.empty());
    }

    {
        stack<String> test;

        test.push("Hello");
        test.push("World!");

        assert(test.pop() == "World!");
        assert(test.top() == "Hello");
    }

    {
        stack<String> test;

        test.push("Hello");
        test.push("World!");

        assert(test.pop() == "World!");
        assert(test.pop() == "Hello");
        assert(test.empty());
    }

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

    std::cout << "Done testing push and pop." << std::endl;
    return 0;
}

