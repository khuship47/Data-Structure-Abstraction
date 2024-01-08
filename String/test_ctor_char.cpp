//Tests: This file is testing for character constructor

#include "string.hpp"
#include <cassert>
#include <iostream>

//===========================================================================

int main () {

{
	//Setup

	//Test
	String str('a'); 
        
	//Verify
	assert(str == 'a');
}

{
        //Setup

        //Test
        String str(' ');

        //Verify
        assert(str == ' ');
}

{
        //Setup

        //Test
	String str('\0');

        //Verify
        String(str == '\0');
}

{
        //Setup

        //Test
	String str('\0');

        //Verify
        String(str == "\0");
}

{
        //Setup

        //Test
        String str('Z');

        //Verify
        assert(str == 'Z');
}

{
        //Setup

        //Test
	String str('A');

        //Verify
        assert(str == "A");
}

{
        //Setup

        //Test
	String str('!');

        //Verify
        assert(str == "!");
}


   std::cout << "Done testing the character constructor." << std::endl;
   return 0;
}
