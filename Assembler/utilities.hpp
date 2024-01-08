//Khushi Patel
//Prgram for converting infix to postfix expressions

#ifndef UTILITIES_HPP
#define UTILITIES_HPP

#include "stack.hpp"
#include "string.hpp"

String infixToPostfix(const String&);
String infixToPrefix(const String&);

void postfixToAssembly(const String&, std::ostream&);
void prefixToAssembly(const String&, std::ostream&);

String evaluate(const String&, const String&, const String&, int&, std::ostream&);

String IntToString(int);


#endif