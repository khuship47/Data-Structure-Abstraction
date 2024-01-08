//Tests: C-string constructor

#include <iostream>
#include <cassert>
#include "string.hpp"

//===========================================================================

int main () {

{
	//Setup

	//Test
	String str(" ");

	//Verify
	String(str == " ");
}

{
        //Setup

        //Test
        String str("ABC");

        //Verify
        String(str == "ABC");

}

{
       //Setup

        //Test
	String str("\0");

        //Verify
        String(str == "\0");
}

{
        //Setup

        //Test
	String str("ab");

        //Verify
        String(str == "ab");
}

{
        //Setup

        //Test
	String str("A");

        //Verify
        String(str == 'A');
}

{
        //Setup

        //Test
	String str("a");

        //Verify
        String(str == "a");
}


{
        //Setup

        //Test
	String str("/0");

        //Verify
        String(str == '\0');
}

{
        //Setup

        //Test
	String str = "Hello!";

        //Verify
        String(str == "Hello!");
}

   std::cout << "Done testing constant string character array constructor." << std::endl;
   return 0;


}
