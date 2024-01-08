//Tests: comparison less than equals <=

#include "string.hpp"
#include <cassert>
#include <iostream>
//===========================================================================
int main () {

     {
	//Setup
	String str, str1;

	//Test
	assert(str <= str1);

	//Verify
	std::cout << str << " <= " << str1 << std::endl;
     }

     {
      	//Setup
        String str = "ab", str1 = "ab";

        //Test
	assert(!(str < str1));

        //Verify
        std::cout << str << " !< " << str1 << std::endl;
     }

     {
        //Setup
        String str("abc"), str1("ab");

        //Test
        assert(str >= str1);

        //Verify
        std::cout << str << " >= " << str1 << std::endl;
     }

     {
        //Setup
        String str("bc"), str1;

        //Test
        assert(str > str1);

        //Verify
        std::cout << str << " > " << str1 << std::endl;
     }

     {
        //Setup
        String str("abc"), str1("adk");

        //Test
        assert(str < str1);

        //Verify
        std::cout << str << " < " << str1 << std::endl;
     }

     {
        //Setup
        String str('A'), str1("a");

        //Test
        assert(str < str1);

        //Verify
        std::cout << str << " < " << str1 << std::endl;
     }

     {
        //Setup
        String str('a'), str1("abc");

        //Test
        assert(str < str1);

        //Verify
        std::cout << str << " < " << str1 << std::endl;
     }

     {
        //Setup
        String str("a"), str1("abc");

        //Test
        assert(str < str1);

        //Verify
        std::cout << str << " < " << str1 << std::endl;
     }

     {
        //Setup
        String str("ABC"), str1("a");

        //Test
        assert(str <= str1);

        //Verify
        std::cout << str << " <= " << str1 << std::endl;
     }

     {
        //Setup
        String str("ABC"), str1('a');

        //Test
        assert(str < str1);

        //Verify
        std::cout << str << " < " << str1 << std::endl;
     }

     {
        //Setup
        String str('b'), str1('a');

        //Test
        assert(str > str1);

        //Verify
        std::cout << str << " > " << str1 << std::endl;
     }

     {
      	//Setup
        String str('B'), str1("asf");

        //Test
	assert(str < str1);

        //Verify
        std::cout << str << " < " << str1 << std::endl;
     }

     {
      	//Setup
        String str('B'), str1('A');

        //Test
	assert(str > str1);

        //Verify
        std::cout << str << " > " << str1 << std::endl;
     }


     {
        //Setup
        String str("XYZ"), str1("XYZ");

        //Test
        assert(str >= str1);

        //Verify
        std::cout << str << " >= " << str1 << std::endl;
     }

     {
        //Setup
        String str("Ab"), str1("a");

        //Test
        assert(str <= str1);

        //Verify
        std::cout << str << " <= " << str1 << std::endl;
     }

     {
  	//Setup
        String str("a"), str1("\0");

        //Test
	assert(str >= str1);

        //Verify
        std::cout << str << " >= " << str1 << std::endl;
     }
{
	//Setup
	String str("ab");

	//Test
	assert(!("foo" < str));

	//Verify
	std::cout << "foo" <<  "!<" << str << std::endl;

}


   std::cout << "Done testing less than equals operator." << std::endl;
   return 0;
}
