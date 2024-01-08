// Khushi Patel
// 2nd Jan 2024
// ADT: String

#include <iostream>
#include "string.hpp"
#include <cassert>



String::String(){
    stringSize = 1;
    str = new char[stringSize];
    str[0] = '\0';
}    

String::String(char ch){
    if(ch == '\0'){
        stringSize = 1;
        str = new char[stringSize];
        str[0] = '\0'; 
    }
    else{
        stringSize = 2;
        str = new char[stringSize];
        str[0] = ch;
        str[1] = '\0';
    }
}             

String::String(const char ch[]){
    int len = 0;
    while(ch[len] != '\0') ++len;
    
    stringSize = len + 1;
    str = new char[stringSize];

    for(int j=0; j<len; ++j){
        str[j] = ch[j];
    }

    str[len] = '\0';
}    

String::String(const String& actual){
    stringSize = actual.stringSize;
    str = new char[stringSize];

    for(int i=0; i<stringSize; ++i){
        str[i] = actual.str[i];
    }
}               

String::~String(){
    delete [] str;
}                

void String::swap(String& actual){
    int tempStringSize = stringSize;
    stringSize = actual.stringSize;
    actual.stringSize = tempStringSize;

    char *tempStr = str;
    str = actual.str;
    actual.str = tempStr;
}                       

String& String::operator=(String actual){
    swap(actual);
    return *this;
}                


int String::capacity() const{
    return stringSize - 1;
}

int String::length() const  {
    return capacity();
}

char& String::operator[](int i){
    if(i <= length()) std::cout << "I: " << i << length() <<std::endl;
    assert(i >= 0);
    return str[i];
}

char String::operator[](int i) const{
    assert(i <= length());
    assert(i >= 0);
    return str[i];
}

String& String::operator+=(const String& rhs){
    if(rhs == "") return *this;
  
    int rhsLength = rhs.length();
    int lhsLength = length();
    int resultLength = rhsLength + lhsLength + 1;

    char *temp = new char[resultLength];
    stringSize = resultLength;

    for(int i=0; i<lhsLength; ++i){
        temp[i] = str[i];
    }
    
    delete [] str;
    str = temp;

    for(int j=0; j<rhsLength; ++j){
        str[lhsLength + j] = rhs[j];
    }

    str[resultLength-1] = '\0';

    return *this;
}

String operator+(String lhs, const String& rhs){
    return lhs += rhs;
}

bool String::operator==(const String& rhs) const{
    int i = 0;
    while(str[i] != '\0' && str[i] == rhs.str[i] && rhs[i] != '\0') ++i;
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
    int i = 0;
    while(str[i] != '\0' && str[i] == rhs.str[i] && rhs[i] != '\0') ++i;
    return str[i] < rhs.str[i];
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
     if(end < start || end < 0) return String();

    int length = end - start + 1;
    char *temp = new char[length + 1]; 

    for(int i = 0; i < length; ++i) {
        temp[i] = str[start + i];
    }

    temp[length] = '\0';
    String new_str(temp);
    delete [] temp;

    return new_str;
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
        if(rhs == substr(i, i+rhs.length()-1)){
            return i;
	}
    }

    return -1;
}

std::ostream& operator<<(std::ostream& out, const String& ch){
    for(int i=0; i<ch.length(); ++i){
        out << ch[i];
    }
    out << std::endl;
    return out;
}

std::istream& operator>>(std::istream& in, String& rhs){
    char ch[500];

    in >> ch;
    rhs = String(ch);
    return in;
}

std::vector<String> String::split(char ch) const {
    std::vector<String> result;
    int len = length();
    int track_point = 0;
    int position = 0;

    do{
        position = findch(track_point, ch);
        if(position == -1) position = len;
        String temp;
        temp = substr(track_point, position - 1);
        result.push_back(temp);
        track_point = position + 1;
    }while(position < len);

    return result;
}

int String::stringToInt() const{

    int toReturn = 0;
    int len = length();
    int temp = 0;

    for (int i = 0; i < len; ++i) {
        temp = int(str[len - 1 - i]) - int('0');
        for (int j = 0; j < i; ++j) 
            temp *= 10;
        toReturn += temp;
    }
    return toReturn;
}


