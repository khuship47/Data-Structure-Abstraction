//Tests: copy constructor

#include "string.hpp"
#include <cassert>
#include <iostream>

//===========================================================================
int main () {

{
	//Setup
	String str = "a", str1 = " ";

	//Test
	str1 = str;

	//Verify
	assert(str == "a");
	assert(str1 == "a");
}

{
        //Setup
        String str = "a", str1 = "hello!";

        //Test
	str = str1;

        //Verify
        assert(str == "hello!");
        assert(str1 == "hello!");
}

{
        //Setup
        String str = "a", str1 = 'a';

        //Test
	str = str1;

        //Verify
        assert(str == 'a');
        assert(str1 == 'a');
}

{
        //Setup
        String str = "a", str1 = "abc ";

        //Test
	str1 = str;

        //Verify
        assert(str == "a");
        assert(str1 == "a");
}
{
        //Setup
        String str, str1 = "Bye!!";

        //Test
	str = str1;

        //Verify
        assert(str == "Bye!!");
        assert(str1 == "Bye!!");
}
{
        //Setup
        String str, str1 = "abc";
        String str2(str1);
        //Test
	str1 = str;

        //Verify
        assert(str == "");
        assert(str1 == "");
}


     std::cout << "Done testing copy constructor." <<std::endl;
     return 0;
}
