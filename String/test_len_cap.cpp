//Tests: this file checks the length of the string

#include "string.hpp"
#include <cassert>
#include <iostream>

//===========================================================================

int main() {

{
	//Setup
	String str;

	//Test
	assert(str == "\0");

	//verify
	assert(str.length() == 0);
}

{
        //Setup
        String str = "a";

        //Test
	assert(str == "a");

        //verify
        assert(str.length() == 1);
	assert(str.capacity() == 1);
}

{
        //Setup
        String str;

        //Test
	assert(str == "\0");

        //verify
        assert(str.length() == '\0');
}

{
        //Setup
        String str('a');

        //Test
	assert(str == "a");

        //verify
        assert(str.length() == 1);
}

{
        //Setup
        String str("a");

        //Test
	assert(str == 'a');

        //verify
        assert(str.length() == 1);
}

{
        //Setup
        String str("abcdefghijk");

        //Test
	assert(str == "abcdefghijk");

        //verify
        assert(str.length() == 11);
	assert(str.capacity() == 11);
}

{
        //Setup
        String str("This is a test case.");

        //Test
	assert(str == "This is a test case.");

        //verify
        assert(str.length() == 20);
}

{
        //Setup
        String str("fmsiqkidptupdmcfkntvduilrxsstirufkzleuhgukrkogxcxnkpffspsmyjurhgfbgzveislipavjuqctvdoyistndoqzuxntqzwgdwykuykdjfwidljcioiaedqaewyvzqkqvxcvetikurriyzfxqpfilsyusxmgnseiepxunodsrayftzysmttppoejvvcmhmtkqudqtupniqkonhtowxycvrwvpkmzfxqjntmvuqvexxrvtarnflxbogfrf");

        //Test
	assert(str == "fmsiqkidptupdmcfkntvduilrxsstirufkzleuhgukrkogxcxnkpffspsmyjurhgfbgzveislipavjuqctvdoyistndoqzuxntqzwgdwykuykdjfwidljcioiaedqaewyvzqkqvxcvetikurriyzfxqpfilsyusxmgnseiepxunodsrayftzysmttppoejvvcmhmtkqudqtupniqkonhtowxycvrwvpkmzfxqjntmvuqvexxrvtarnflxbogfrf");

        //verify
        assert((str.length() == 255));
	assert(str.capacity() == 255);
}

{
        //Setup
        String str("How are you? ");

        //Test
	assert(str == "How are you? ");

        //verify
        assert(str.length() == 13);
}


   std::cout << "Done testing the length fucntion." << std::endl;
   return 0;

}
