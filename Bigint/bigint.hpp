//30th december 2023
//Khushi Patel
//ADT: Arrays = bigint


#ifndef BIGINT_HPP
#define BIGINT_HPP

#include <iostream>

const int CAPACITY = 200;

class bigint{
    public:
        bigint();
        bigint(int);
        bigint(const char[]);

        void debugPrint(std::ostream&) const;
    
        friend std::ostream& operator <<(std::ostream&, const bigint&);
        friend std::istream& operator >>(std::istream&, bigint&);
        
        bool operator==(const bigint&);
        bigint operator+(const bigint&) const;
        int operator[](int) const;

        bigint timesDigit(int) const;
        bigint times10(int) const;
        bigint operator*(const bigint&) const;
        
        bigint nfact(int);
        
    private:
        int bigArray[CAPACITY];
};

#endif