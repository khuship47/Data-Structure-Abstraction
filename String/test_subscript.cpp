// Tests: subscript []

#include <iostream>
#include <cassert>
#include "string.hpp"

//===========================================================================
int main () {
   {
	//Setup
	String str;

	//Test
	char ch = str[0];

	//Verify
	assert(str == '\0');
	assert(ch  == '\0');

   }

   {
    	//Setup
        String str('a');

        //Test
	char ch = str[0];

        //Verify
        assert(str == 'a');
        assert(ch  == 'a');

   }

   {
    	//Setup
        String str("a");

        //Test
	char ch = str[0];

        //Verify
        assert(str == "a");
        assert(ch  == 'a');

   }

   {
    	//Setup
        String str("abc");

        //Test
	char ch = str[1];

        //Verify
        assert(str == "abc");
        assert(ch  == 'b');

   }

   {
    	//Setup
        String str = "xyz";

        //Test
	char ch = str[2];

        //Verify
        assert(str == "xyz");
        assert(ch  == 'z');

   }

   {
    	//Setup
        String str = "xyZ";

        //Test
        char ch = str[2];

        //Verify
        assert(str == "xyZ");
        assert(ch  == 'Z');

   }

   {
    	//Setup
        String str("abc");

        //Test
	char ch = str[3];

        //Verify
        assert(str == "abc");
        assert(ch  == '\0');

   }

   {
    	//Setup
        String str("Hello World!");

        //Test
	char ch = str[7];

        //Verify
        assert(str == "Hello World!");
        assert(ch  == 'o');

   }

   {
    	//Setup
        String str("Hello World!");

        //Test
	char ch = str[5];

        //Verify
        assert(str == "Hello World!");
        assert(ch  == ' ');

   }

   {
    	//Setup
        String str("Hello World!");

        //Test
	char ch = str[11];

        //Verify
        assert(str == "Hello World!");
        assert(ch  == '!');

   }

   std::cout << "Done testing subscript." <<std::endl;
   return 0;
}

