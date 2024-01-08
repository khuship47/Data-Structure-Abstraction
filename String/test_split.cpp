//TESTS: split function


#include "string.hpp"
#include <cassert>
#include <vector>
#include <iostream>

//===========================================================================
int main () {

{
	//Setup
	String str = "Chris is the best!";
        std::vector<String> result;

	//Test
	result = str.split(' ');

	//Verify
	assert(str == "Chris is the best!");
	assert(result[0] == "Chris");
	assert(result[1] == "is");
	assert(result[2] == "the");
	assert(result[3] == "best!");
}

{
	//Setup
	String str = "-a--b---c----";
	std::vector<String> result;

	//Test
	result = str.split('-');

	//Verify
	assert(str == "-a--b---c----");
	assert(result[0] == "");
	assert(result[1] == 'a');
	assert(result[2] == "");
	assert(result[3] == "b");
	assert(result[4] == "");
	assert(result[6] == "c");
	assert(result[7] == "");
}

{
	//Setup
        String str = "&a--b---c&&&";
        std::vector<String> result;
	std::vector<String> result1;

        //Test
	result = str.split('-');
	result1 = str.split('&');

        //Verify
	assert(str == "&a--b---c&&&");
	assert(result[0] == "&a");
	assert(result[2] == 'b');
	assert(result1[0] == "");
	assert(result1[1] == "a--b---c");
	assert(result1[3] == "");
	assert(result[5] == "c&&&");
 	assert(result1[4] == "");
}

{
	//Setup
	String str = "";
	std::vector<String> result;

	//Test
	result = str.split(' ');

	//Verify
	assert(str == "");
	assert(result[0] == "");

}

{
	// Setup
	String str = "String";
        std::vector<String> result;

	// Test
	result = str.split(' ');

	// Verify
	assert(str == "String");
	assert(result[0] == "String");
	}

std::cout << "Done testing split function." << std::endl;
return 0;
}
