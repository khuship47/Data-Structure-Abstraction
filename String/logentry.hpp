//
// File:        logentry.hpp
//
// Version:     1.0
// Date:
// Author:
//
// Description: Class definition for a log entry.
//
//
//
 
#ifndef CS_LOGENTRY_H_
#define CS_LOGENTRY_H_

#include "string.hpp"
#include <iostream>
#include <vector>

class Date {
public:
            Date() {};

            String getDay() const {return day;};
            String getMonth() const {return month;};
            int getYear() const {return year;};

            void setDay(String d) {day = d;};
            void setMonth(String m) {month = m;};
            void setYear(int y) {year = y;};
private:
    String  day, month;
    int     year;
};


class Time {
  public:
            Time() {};

            int getHour() const {return hour;};
            int getMinute() const {return minute;};
            int getSecond() const {return second;};

            void setHour(int h) {hour = h;};
            void setMinute(int m) {minute = m;};
            void setSecond(int s) {second = s;};
  private:
    int     hour, minute, second;
};


class LogEntry {
public:
            LogEntry() {};
            LogEntry(String);
            friend  std::ostream& operator<<(std::ostream&, const LogEntry&);

            String getHost() const {return host;};
            int getNumOfBytes() const {return number_of_bytes;};
private:
    String  host;
    Date    date;
    Time    time;
    String  request;
    String  status;
    int     number_of_bytes;
};


//
// Free functions
//

std::vector<LogEntry>   parse       (std::istream&);
void                    output_all  (std::ostream&, const std::vector<LogEntry> &);
void                    by_host     (std::ostream&, const std::vector<LogEntry> &);
int                     byte_count  (const std::vector<LogEntry>&);

#endif
