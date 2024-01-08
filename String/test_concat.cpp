//Tests: concatenation +=

#include "string.hpp"
#include <cassert>
#include <iostream>

//===========================================================================
int main () {
{
     	//Setup
        String  result = "ab";

        //Test
	(result += result);

        //Verify
        assert(result == "abab");
    }


{
     	//Setup
        String str1, str2, result;

        //Test
	result = (str1 += str2);

        //Verify
        assert(str1 == "");
        assert(str2 == "");
        assert(result == "");
    }


    {
	//Setup
 	String str1, str2, result;

	//Test
	result = str1 + str2;

	//Verify
	assert(str1 == "\0");
	assert(str2 == "\0");
	assert(result == "\0");
    }

    {
        //Setup
        String str1 = 'a', str2 = 'b', result;

        //Test
        result = str1 + str2;

        //Verify
        assert(str1 == 'a');
        assert(str2 == "b");
        assert(result == "ab");
    }

    {
        //Setup
        String str1, str2('b'), result;

        //Test
        result =  (str1 + str2);

        //Verify
        assert(str1 == "\0");
        assert(str2 == "b");
        assert(result == "b");
    }

    {
        //Setup
        String str1, str2, result;

        //Test
        result = str1 + str2;

        //Verify
        assert(str1 == "\0");
        assert(str2 == '\0');
        assert(result == "\0");
    }

    {
        //Setup
        String str1('a'), str2('b'), result;

        //Test
        result = str1 + str2;

        //Verify
        assert(str1 == "a");
        assert(str2 == "b");
        assert(result == "ab");
    }

    {
     	//Setup
        String str1("a"), str2("bcdef"), result;

        //Test
	result = str1 + str2;

        //Verify
        assert(str1 == "a");
        assert(str2 == "bcdef");
        assert(result == "abcdef");
    }

    {
        //Setup
        String str1("a"), str2("b"), result;

        //Test
        result = str1 + str2;

        //Verify
        assert(str1 == "a");
        assert(str2 == "b");
        assert(result == "ab");
    }

    {
       //Setup
        String str1('a'), str2("b"), result;

        //Test
        result = str1 + str2;

        //Verify
        assert(str1 == "a");
        assert(str2 == 'b');
        assert(result == "ab");
    }

    {
     	//Setup
        String str1("A"), str2("b"), result;

        //Test
	result = str1 + str2;

        //Verify
        assert(str1 == 'A');
        assert(str2 == "b");
        assert(result == "Ab");
    }

{
     	//Setup
        String str1("abc"), str2("abc"), result;

        //Test
	result = str1 + str2;

        //Verify
        assert(str1 == "abc");
        assert(str2 == "abc");
        assert(result == "abcabc");
    }


    {
        //Setup
        String str1("This is a test case.");
        String str2("It should pass."), result;

        //Test
        result = str1 + str2;

        //Verify
        assert(str1 == "This is a test case.");
        assert(str2 == "It should pass.");
        assert(result == "This is a test case.It should pass.");
    }

    {
        //Setup
        String str1("Hello!"), result;

        //Test
        result = str1 + "How are you?";

        //Verify
        assert(str1 == "Hello!");
        assert(result == "Hello!How are you?");
    }

    {
        //Setup
        String str1("Good Morning"), result;

        //Test
        result = str1 + '!';

        //Verify
        assert(str1 == "Good Morning");
        assert(result == "Good Morning!");
    }

    {
        //Setup
        String str1("Hello"), str2("world!");

        //Test
         str1 +=  " " +  str2;

        //Verify
        assert(str1 == "Hello world!");
    }

    {
        //Setup
        String str1("This is a test.");

        //Test
        str1 += "It should pass.";

        //Verify
        assert(str1 == "This is a test.It should pass.");
    }

    {
     	//Setup
        String str1("fmsiqkidptupdmcfkntvduilrxsstirufkzleuhgukrkogxcxnkpffspsmyjurhgfbgzveislipavjuqctvdoyistndoqzuxntqzwgdwykuykdjfwidljcioiaedqaewyvzqkqvxcvetikurriyzfxqpfilsyusxmgnseiepxunodsrayftzysmttppoejvvcmhmtkqudqtupniqkonhtowxycvrwvpkmzfxqjntmvuqvexxrvtarnflxbogfrf");

        //Test
//	str1 += "It should pass.";

        //Verify
        assert(str1 == "fmsiqkidptupdmcfkntvduilrxsstirufkzleuhgukrkogxcxnkpffspsmyjurhgfbgzveislipavjuqctvdoyistndoqzuxntqzwgdwykuykdjfwidljcioiaedqaewyvzqkqvxcvetikurriyzfxqpfilsyusxmgnseiepxunodsrayftzysmttppoejvvcmhmtkqudqtupniqkonhtowxycvrwvpkmzfxqjntmvuqvexxrvtarnflxbogfrf");
    }



    std::cout << "Done with testing addition." << std::endl;
    return 0;
}
