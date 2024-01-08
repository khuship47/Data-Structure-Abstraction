#include "bigint.hpp"
#include <iostream>
#include <ostream>


//Milestone-1

bigint::bigint(){
    for(int i=0; i<CAPACITY; ++i){
        bigArray[i] = 0;
    }
}

bigint::bigint(int x): bigint(){
    for(int i=0; i<CAPACITY; ++i){
        bigArray[i] = x % 10;
        x = x / 10;
    }
}

bigint::bigint(const char x[]): bigint(){
    int length = 0;
    while(x[length] != '\0') ++length;
    
    int k = 0;
    for(int i=length-1; i>=0; --i){
        bigArray[k] = int(x[i]) - int('0');
        ++k;
    }
}

void bigint::debugPrint(std::ostream& out) const{
    for(int i=CAPACITY-1; i>0; --i){
        out << bigArray[i] << "|";
    }
}


std::ostream& operator <<(std::ostream& out, const bigint& x) {
    int i = CAPACITY-1;
    int num_count = 0;
    while(i>0 && x.bigArray[i] == 0) --i;

    for(; i>=0; --i){
        if((num_count < 80)){
            out << x.bigArray[i]; 
            num_count++;
        }
        else
        {
            out << x.bigArray[i] << std::endl;
            num_count = 0;
        }
    }
    return out;
}

bool bigint::operator==(const bigint& x){
    for(int i=0; i<CAPACITY; ++i){
        if(x.bigArray[i] != bigArray[i]){
            return false;
        }
    }
    return true;
}

//Milestone-2

std::istream& operator >>(std::istream& in, bigint& x){
    char ch, temp[CAPACITY];

    in >> ch;
    int i=0;

    while(i < CAPACITY){
        if(ch != ';'){
            temp[i] = ch;
            in >> ch;
            ++i;
        }
        else{
            break;
        }
    }
    temp[i] = '\0';
    x = bigint(temp);

    return in;
}

bigint bigint::operator+(const bigint& x) const{
    bigint result;
    int sum = 0, carry = 0;

    for(int i=0; i<CAPACITY; ++i){
        sum = x.bigArray[i] + bigArray[i] + carry;
        carry = sum / 10;
        sum = sum % 10;
        result.bigArray[i] = sum; 
    }
    return result;
}

int bigint::operator[](int num) const{
    if(num<0 && num>=CAPACITY) return 0;
    return bigArray[num];
}

//Milestone-3

bigint bigint::timesDigit(int num) const{
    bigint result;
    int product = 0, carry = 0;

    for(int i=0; i<CAPACITY; ++i){
        product = num * bigArray[i] + carry;
        carry = product / 10;
        product = product % 10;
        result.bigArray[i] = product; 
    }
    return result;
}

bigint bigint::times10(int num) const{
    bigint temp;

    for(int i=CAPACITY-1-num; i>=0; --i){
        temp.bigArray[i + num] = bigArray[i];
    }

    for(int j=0; j<num; ++j){
        temp.bigArray[j] = 0;
    }

    return temp;

}

bigint bigint::operator*(const bigint& x) const{
    bigint product = 0;

    for(int i=0; i<CAPACITY-1; ++i){
        product = product + timesDigit(x.bigArray[i]).times10(i);
    }

    return product;
}

//extra-credits
bigint bigint::nfact(int n){
    bigint factorial = 1;
    
    for(int i=2; i<=n; ++i){
        factorial = factorial * i;
    }
    int count = 0;
    for(int j=0; j<CAPACITY; ++j){
        if(factorial[j] == 0)
            ++count;
        else{
            break;
        }
    }
    std::cout << "Trailing zeros: " << count << std::endl;

    return factorial;

}