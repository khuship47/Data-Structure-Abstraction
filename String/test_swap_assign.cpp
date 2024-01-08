//Tests: concatenation +=

#include "string.hpp"
#include <cassert>
#include <iostream>

//===========================================================================
int main () {

{
	//Setup
	String str = 'a', str1 = " ";

	//Test
	str.swap(str1);

	//Verify
	assert(str == " ");
	assert(str1 == 'a');
}

{
        //Setup
        String str = "", str1 = " ";

        //Test
	str.swap(str1);

        //Verify
        assert(str == " ");
        assert(str1 == "");


}

{
        //Setup
        String str = "abc", str1 = "hi";

        //Test
	str.swap(str1);

        //Verify
        assert(str == "hi");
        assert(str1 == "abc");


}

{
        //Setup
        String str = '.', str1 = '!';

        //Test
	str.swap(str1);

        //Verify
        assert(str == '!');
        assert(str1 == '.');


}

{
        //Setup
        String str = "Welcome to US!", str1 = "Nice to meet you.";

        //Test
	str.swap(str1);

        //Verify
        assert(str == "Nice to meet you.");
        assert(str1 == "Welcome to US!");


}

{
        //Setup
        String str = "", str1 = "Bye!!";

        //Test
	str.swap(str1);

        //Verify
        assert(str == "Bye!!");
        assert(str1 == "");
}

{
        //Setup
        String str, str1 = "Bye!!";

        //Test
	str.swap(str1);

        //Verify
        assert(str == "Bye!!");
        assert(str1 == '\0');
}

{
        //Setup
        String str = "abc", str1 = "abc";

        //Test
	str.swap(str1);

        //Verify
        assert(str == "abc");
        assert(str1 == "abc");
}



    std::cout << "Done testing swap assign." <<std::endl;
    return 0;
}
