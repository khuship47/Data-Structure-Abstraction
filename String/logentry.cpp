//
//
// File:        logentry.cpp  
//       
// Version:     1.0
// Date:        
// Author:      
//
// Description: Class implementation for a log entry.
//
//
 
#include "string.hpp"
#include "logentry.hpp"
#include <iostream>
#include <vector>

// REQUIRES:
// ENSURES: 
//
LogEntry::LogEntry(String s) {
    // ...
    std::vector<String> vec = s.split(' ');
  
    if(vec.size() == 10){
        if(vec[9] != ""){
            host = vec[0];

            std::vector<String> vecDate = vec[3].split('/');
            date.setDay(vecDate[0].substr(1, vecDate[0].length() - 1));
            date.setMonth(vecDate[1]);

            std::vector<String> vecTime = vecDate[2].split(':');
            date.setYear(vecTime[0].stringToInt());
            time.setHour(vecTime[1].stringToInt());
            time.setMinute(vecTime[2].stringToInt());
            time.setSecond(vecTime[3].stringToInt());

            request = vec[5] + " " + vec[6] + " " + vec[7];
            status = vec[8];
            if(vec[9] != '-')number_of_bytes = vec[9].stringToInt();
            else number_of_bytes = 0;
        }
    }
    
}

// REQUIRES:
// ENSURES: 
//
std::vector<LogEntry> parse(std::istream& in) {
    std::vector<LogEntry> result;
    String temp;
    char ch;

    while(!in.eof()){
        temp = "";
        in.get(ch);
        while(ch != '\n'){
            temp += ch;
            in.get(ch);

            if(in.eof()) break;
        }
        result.push_back(LogEntry(temp));
    }

    return result;
}

// REQUIRES:
// ENSURES: 
//
void output_all(std::ostream& out, const std::vector<LogEntry> & log) {
    for(size_t i=0; i<log.size(); ++i){
        out << log[i] << std::endl;
    }
}

// REQUIRES:
// ENSURES: 
//
void by_host(std::ostream& out, const std::vector<LogEntry>& log) {
    for(size_t i=0; i<log.size(); ++i){
        out << log[i].getHost();
    }
}

/// REQUIRES:
// ENSURES: 
//
int byte_count(const std::vector<LogEntry>& log) {
    int sum = 0;

    for(size_t i=0; i<log.size(); ++i){
        sum += log[i].getNumOfBytes();
    }

    return sum;
}

std::ostream& operator<<(std::ostream& out, const LogEntry& log){
    out << "Host: " << log.host;

    out << "Day: " << log.date.getDay();
    out << "Month: " << log.date.getMonth();
    out << "Year: " << log.date.getYear() << std::endl;

    out << "Hour: " << log.time.getHour() << std::endl;
    out << "Minute: " << log.time.getMinute() << std::endl;
    out << "Second: " << log.time.getSecond() << std::endl;

    out << "Request: " << log.request;
    out << "Status: " << log.status;
    out << "Bytes: " << log.number_of_bytes;
    out << std::endl;

    return out;
}