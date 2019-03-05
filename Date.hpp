#ifndef date
#define date

class Date {
    int day;int month;int year;


public:
    const int& day();
    const int& month();
    const int& year();

    int& day();
    int& month();
    int& year();

    Date();
    Date(int day,int month,int year);

    static bool is_date(int day, int month, int year);
    static std::string to_string(const Date& date);
    static bool parse_date(const std::string& date_name)

    
};
