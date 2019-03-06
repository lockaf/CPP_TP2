#ifndef date
#define date
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

    int& day();
    int& month();
    int& year();

    Date();
    Date(int day_param,int month_param,int year_param);

    static bool is_date(Date const& d);
    static std::string to_string(const Date& date);
    static Date from_string(const std::string& name);

};

#endif
