//Tests: Finding character from a given string


#include "string.hpp"
#include <cassert>
#include <iostream>
//===========================================================================
int main () {

{
	//Setup
	String str;

	//Test
	assert(str == "");

	//Verify
	assert(str.findch(0, 'a') == -1);
}

{
        //Setup
        String str = "This is a test case.";

        //Test
        assert(str == "This is a test case.");

        //Verify
        assert(str.findch(0, 'i') == 2);
}

{
        //Setup
        String str("This is a test case.");

        //Test
        assert(str == "This is a test case.");

        //Verify
        assert(str.findch(4, 'i') == 5);
}

{
        //Setup
        String str = "This is a test case.";

        //Test
        assert(str == "This is a test case.");

        //Verify
        assert(str.findch(10, 'a') == 16);
}

{
        //Setup
        String str("This is a test case.");

        //Test
        assert(str == "This is a test case.");

        //Verify
        assert(str.findch(0, ' ') == 4);
}

{
        //Setup
        String str("This is a test case.");

        //Test
        assert(str == "This is a test case.");

        //Verify
        assert(str.findch(0, 'T') == 0);
	assert(str.findch(0, 't') == 10);
	assert(str.findch(11,'t') == 13);
	assert(str.findch(10,'t') == 10);
}

{
        //Setup
        String str("This is a test case.");

        //Test
        assert(str == "This is a test case.");

        //Verify
        assert(str.findch(0, 'z') == -1);
}

{
        //Setup
        String str("Hello!");

        //Test
        assert(str == "Hello!");

        //Verify
        assert(str.findch(0, '!') == 5);
}


   std::cout << "Done testing find character." << std::endl;
   return 0;
}
