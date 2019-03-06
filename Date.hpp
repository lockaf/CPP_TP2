#ifndef DATE_H
#define DATE_H
#pragma once
#include <fstream>
#include <iostream>
#include <string>

class Date {
    int day_value;
    int month_value;
    int year_value;




public:
    const int& day() const;
    const int& month() const;
    const int& year() const;

    void day(int);
    void month(int);
    void year(int);

    Date();
    Date(int day_param,int month_param,int year_param);

    static bool is_date(int, int, int);
    static std::string to_string(const Date& date);
    static Date from_string(const std::string& name);

};

#endif
