#include "stack.hpp"
#include "string.hpp"
#include "utilities.hpp"

String infixToPostfix(const String& str){
    std::vector<String> token = str.split(' ');
    int track = 0;
    String right, oper, left;
    stack<String> ST;

    while(token[track] != ';'){
        if(token[track] == ')'){
            right = ST.pop();
            oper = ST.pop();
            left = ST.pop();

            ST.push(left + " " + right + " " + oper);
        }
        else if(token[track] != '('){
          ST.push(token[track]);  
        }
        ++track;
    }

    return ST.pop();
}

void postfixToAssembly(const String& str, std::ostream& out){
    String right, left;
    stack<String> ST;

    int temp_count = 0;

    std::vector<String> vec = str.split(' ');
    size_t i = 0;

    while(i < vec.size()) {
        if(vec[i] != '+' && vec[i] != '-' && vec[i] != '/' && vec[i] != '*') {
            ST.push(vec[i]);
        }
        else {
            right = ST.pop();
            left = ST.pop(); 
            ST.push(evaluate(left, vec[i], right, temp_count, out));
        }
        ++i;
    }
}

String evaluate(const String& left, const String& oper, const String& right, int& temp_count, std::ostream& out) {
   String temp = "TMP";

   temp = temp + IntToString(++temp_count);

   out << "   LD     " << left << std::endl;
   if(oper == '+') out << "   " << "AD" << "     "  << right << std::endl;
   if(oper == '-') out << "   " << "SB" << "     "  << right << std::endl;
   if(oper == '/') out << "   " << "DV" << "     "  << right << std::endl;
   if(oper == '*') out << "   " << "MU" << "     "  << right << std::endl;
   else out << "";

   out << "   ST     " << temp << std::endl;

   return temp;
}

String IntToString(int x){
    String result;

    while(x != 0 ) {
        int temp = x % 10;
        x/=10;
        result = String(char(temp + '0')) + result;
    }
    return result;
}


String infixToPrefix(const String& str){
    std::vector<String> token = str.split(' ');
    int track = 0;
    String right, oper, left;
    stack<String> ST;

    while(token[track] != ';'){
        if(token[track] == ')'){
            right = ST.pop();
            oper = ST.pop();
            left = ST.pop();

            ST.push(oper + " " + left + " " + right);
        }
        else if(token[track] != '('){
          ST.push(token[track]);  
        }
        ++track;
    }

    return ST.pop();
}

void prefixToAssembly(const String& s, std::ostream& out) {

   String left, right;
   stack<String> st;
   int temp_count = 0;

   std::vector<String> vec = s.split(' ');
   size_t i = vec.size() - 1;

   while(i >= 0 && i < vec.size()) {
        if(vec[i] != '+' && vec[i] != '-' && vec[i] != '/' && vec[i] != '*') {
           st.push(vec[i]);
        }

	else {
           left = st.pop();
           right = st.pop();
           st.push(evaluate(left, vec[i], right, temp_count, out));
        }
	--i;
   }
}
