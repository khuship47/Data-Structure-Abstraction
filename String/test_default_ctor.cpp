//Tests: testing the default string method

#include "string.hpp"
#include <cassert>
#include <iostream>

//===========================================================================

int main() {

{
	//Setup

	//Test
	String str;

	//Verify
	assert(str == '\0');
	assert(str == "");
	assert(str[0] == '\0');
	assert(str == "\0");
}

    std::cout << "Done testing default string." <<std::endl;
    return 0;
}
