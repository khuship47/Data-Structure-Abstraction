// Khushi Patel
// 2nd Jan 2024
// ADT: String

#include <iostream>
#include "string.hpp"
#include <cassert>


String::String(){
    str[0] = 0;
}

String::String(char ch){
    str[0] = ch;
    str[1] = 0;
}

String::String(const char ch[]){
    int i=0;
    for(; i<=capacity(); ++i){
        str[i] = ch[i];
    }
}

int String::capacity() const{
    return STRING_SIZE - 1;
}

int String::length() const  {
   int len = 0;

   while(str[len] != '\0')
	++len;

   return len;
}

char& String::operator[](int i){
    assert(i <= length());
    assert(i >= 0);
    return str[i];
}

char String::operator[](int i) const{
    assert(i <= length());
    assert(i >= 0);
    return str[i];
}

String& String::operator+=(const String& rhs){
    int rhsLength = rhs.length();
    int lhsLength = length();
    int i = 0;

    while(i < rhsLength){
        str[lhsLength + i] = rhs[i];
        ++i;
    }
    str[lhsLength + i] = '\0';

    return *this;
}
String operator+(String lhs, const String& rhs){
    return lhs += rhs;
}

bool String::operator==(const String& rhs) const{
    int i=0;
    for(; i<length(); ++i){
        if(str[i] != rhs.str[i])
            return false;
    }
    return str[i] == rhs.str[i];
}

bool operator==(const char lhs[], const String& rhs){
    return String(lhs) == rhs;
}
bool operator==(char lhs, const String& rhs){
    return String(lhs) == rhs;
}
bool operator!=(const String& lhs, const String& rhs){
    return !(lhs == rhs);
}

bool String::operator<(const String& rhs) const{
    int i=0;
    while(str[i] != '\0' && str[i] == rhs.str[i]) ++i;

    return str[i] < rhs[i];
}

bool operator<(const char lhs[], const String& rhs){
    return String(lhs) < rhs;
}
bool operator<(char lhs, const String& rhs){
    return String(lhs) < rhs;
}
bool operator<=(const String& lhs, const String& rhs){
    return (lhs < rhs) || (lhs == rhs);
}
bool operator>=(const String& lhs, const String& rhs){
    return (rhs < lhs) || (lhs == rhs);
}
bool operator>(const String& lhs, const String& rhs){
    return rhs < lhs;
}

String String::substr(int start, int end) const {
    String result;
    int i = start;

    if(start < 0 || start >= length()) return String();
    if(end < start || end > length()) return String();

    while(i <= (end)) {
       if(i >= length()) break;
         result.str[i - start] = str[i];
         ++i;
}
    result[i - start] = 0;
    return result;
}

int String::findch(int start, char ch) const{
    int i = start;
    if(i<0 || i>=length()) return -1;

    while(str[i] != '\0'){
        if(str[i] == ch)
            return i;
        ++i;
    }

    return -1;
}

int String::findstr(int start, const String& rhs) const{
    if(rhs == "") return -1;

    for(int i=start; i<length() - rhs.length()+1; ++i){
        if(rhs == substr(i, i+rhs.length()-1))
            return i;
    }

    return -1;
}

std::ostream& operator<<(std::ostream& out, const String& rhs){
    for(int i=0; i<rhs.length(); ++i){
        out << rhs[i];
    }
    out << std::endl;
    return out;
}

std::istream& operator>>(std::istream& in, String& rhs) {
    char ch[STRING_SIZE];

    in >> ch;
    rhs = String(ch);
    return in;
}
