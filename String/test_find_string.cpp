//Tests: finding a string from the given string

#include "string.hpp"
#include <cassert>
#include <iostream>
//===========================================================================

int main () {
{
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left("abc");
        String  right("ab");


        // TEST
        int result = left.findstr(0,right);
        std::cout<<result<<std::endl<<left.length()<<std::endl;
        // VERIFY
        assert(left   == "abc");
        assert(result == 0);
    }






{
    //------------------------------------------------------
    // Test
    String testing = "test sentence";

    // Verify
    assert(testing.findstr(0, "test") == 0);
  }
{
	//Setup
	String str;

	//Test
	assert(str == "");

	//Verify
	assert(str.findstr(0, "This") == -1);
	assert(str.findstr(0, "") == -1);
}

{
        //Setup
        String str("x");

        //Test
	assert(str == "x");

        //Verify
        assert(str.findstr(0, "x") == 0);
        assert(str.findstr(0, "") == -1);
}


{
        //Setup
        String str = "How are you?";

        //Test
	assert(str == "How are you?");
        std::cout<<"here: " <<str.length()<<std::endl;
        //Verify
        assert(str.findstr(0, "are") == 4);
}

{
        //Setup
        String str = "How are you?";

        //Test
	assert(str == "How are you?");

        //Verify
        assert(str.findstr(0, "How") == 0);
}

{
        //Setup
        String str = "How are you?";

        //Test
	assert(str == "How are you?");

        //Verify
        assert(str.findstr(0, " ") == 3);
}

{
        //Setup
        String str = "How are you?";

        //Test
	assert(str == "How are you?");

        //Verify
        assert(str.findstr(0, "?") == 11);
}

{
        //Setup
        String str = "How are you?";

        //Test
	assert(str == "How are you?");

        //Verify
        assert(str.findstr(5, "are") == -1);
}

{
        //Setup
        String str = "How are you?";

        //Test
	assert(str == "How are you?");

        //Verify
        assert(str.findstr(5, "re") == 5);
}

{
        //Setup
        String str = "How are you?";

        //Test
	assert(str == "How are you?");

        //Verify
        assert(str.findstr(0, "ow are you?") == 1);
}

{
        //Setup
        String str = "How are you?";

        //Test
	assert(str == "How are you?");

        //Verify
        assert(str.findstr(4, " ") == 7);
}

{
        //Setup
        String str = "How are you?";

        //Test
	assert(str == "How are you?");

        //Verify
        assert(str.findstr(3, "ow are you?") == -1);
}

   std::cout << "Done testing find string." << std::endl;
   return 0;
}
