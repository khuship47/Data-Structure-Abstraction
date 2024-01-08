//Tests: Finding the location of a character from the given string

#include "string.hpp"
#include <cassert>
#include <iostream>

//===========================================================================
int main () {

{
	//Setup
	String str = "abcdefghijk";
	String result1, result2, result3, result4, result5;

	//Test
	result1 = str.substr(0,0);
	result2 = str.substr(0,10);
	result3 = str.substr(0, 5);
	result4 = str.substr(5,2);
	result5 = str.substr(20,20);
        
	//Verify
	assert(str == "abcdefghijk");
	assert(result1 == 'a');
	assert(result2 == "abcdefghijk");
	assert(result3 == "abcdef");
	assert(result4 == "\0");
	assert(result5 == '\0');

}

{
        //Setup
        String str = "This is a test case.";
        String result1, result2, result3, result4, result5;

        //Test
	result1 = str.substr(0,1);
        result2 = str.substr(0,4);
        result3 = str.substr(8,1);
        result4 = str.substr(8,1);
	result5 = str.substr(0,19);

        //Verify
        assert(str == "This is a test case.");
        assert(result1 == "Th");
        assert(result2 == "This ");
        assert(result3 == '\0');
	assert(result4 == "");
	assert(result5 == "This is a test case.");
}


{
        //Setup
        String str = "abcdefghijk;";
        String result1, result2, result3, result4, result5;

        //Test
	result1 = str.substr(2,7);
        result2 = str.substr(7,8);
        result3 = str.substr(11, 11);
        result4 = str.substr(12, 15);
	result5 = str.substr(4,9);

        //Verify
        assert(str == "abcdefghijk;");
        assert(result1 == "cdefgh");
	assert(result2 == "hi");
        assert(result3 == ";");
        assert(result4 == "");
	assert(result5 == "efghij");
}

   std::cout << "Done testing substring." << std::endl;
   return 0;
}
