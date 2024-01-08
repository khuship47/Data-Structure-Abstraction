// Tests: comparison equals ==

#include <iostream>
#include <cassert>
#include "string.hpp"

//===========================================================================

int main() {

      {
	//Setup
	String str;

	//Test
	assert(str == '\0');

	//Verify
	std::cout << " == " << str << std::endl;
      }

      {
       	//Setup
        String str;

        //Test
	assert(str == "");

        //Verify
        std::cout << " == " << str << std::endl;
      }

      {
       	//Setup
        String str;

        //Test
	assert(str == "\0");

        //Verify
        std::cout << " == " << str << std::endl;
      }

      {
        //Setup
        String str1("ab"), str2("aB");

        //Test
        assert(!(str1 == str2));

        //Verify
        std::cout << str1 <<" != " << str2  << std::endl;
      }

      {
        //Setup
        String str("abc"), str1("abc");
       
        //Test
        assert(str == str1);

        //Verify
        std::cout << str << " == " << str1 << std::endl;
      }

      {
        //Setup
        String str("kH"), str1("KH");

        //Test
        assert(!(str == str1));

        //Verify
        std::cout << str << " != " <<  str1 << std::endl;
      }
{
       	//Setup
        String str("bcd"), str1('b');

        //Test
	assert(!(str == str1));

        //Verify
        std::cout << str << " != " <<  str1 << std::endl;
      }


      {
       	//Setup
        String str('a'), str1("KH");

        //Test
	assert(!(str == str1));

        //Verify
        std::cout << str << " != " <<  str1 << std::endl;
      }


      {
        //Setup
        String str("a"), str1('a');

        //Test
        assert((str == str));

        //Verify
        std::cout << str << " == " << str1 << std::endl;
      }

      {
        //Setup
        String str('a'), str1('A');

        //Test
        assert(!(str == str1));

        //Verify
        std::cout << str << " != " << str1 << std::endl;
      }

      {
        //Setup
        String str("a"), str1('A');

        //Test
        assert(!(str == str1));

        //Verify
        std::cout << str << " != " <<  str1 << std::endl;
      }

      {
        //Setup
        String str("a"), str1("aA");
      
        //Test
        assert(!(str == str1));

        //Verify
        std::cout << str << " != " << str1 << std::endl;
      }

      {
        //Setup
        String str("abc"), str1("ABC");

        //Test
        assert(!(str == str1));

        //Verify
        std::cout << str << " != " << str1 << std::endl;
      }

      {
        //Setup
        String str("abc"), str1("bc");

        //Test
        assert(!(str == str1));

        //Verify
        std::cout << str << " != " << str1 << std::endl;
      }

{
       	//Setup
        String str("ashdfijhsdiufhiudshgihsdrifgiushergitheriuahklamcojndfignaeioujphsdfuhsbfibhsuhbdfhuasijfhjubaefhbauifbhjabfhebaeybfiuanifjnhjnfahdfiuahifhiuahefuhauihfiuhsg9jaiughaiuhgiuhasiduhgaisudgniuahiguaiugiuahngiudiduhjgiuashjgiojsadiojgioasjgiujaiushjgiuahdgiuhi"); 
        String str1("ashdfijhsdiufhiudshgihsdrifgiushergitheriuahklamcojndfignaeioujphsdfuhsbfibhsuhbdfhuasijfhjubaefhbauifbhjabfhebaeybfiuanifjnhjnfahdfiuahifhiuahefuhauihfiuhsg9jaiughaiuhgiuhasiduhgaisudgniuahiguaiugiuahngiudiduhjgiuashjgiojsadiojgioasjgiujaiushjgiuahdgiuhi");

        //Test
	      assert((str == str1));

        //Verify
        std::cout << str << " == " << str1 << std::endl;
      }


    std::cout << "Done testing equal." << std::endl;
    return 0;

}
