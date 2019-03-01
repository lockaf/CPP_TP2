#ifndef date
#define date

struct Date {
    int day,int month,int year;
    const int& day() const;
    const int& month() const;
    const int& year() const;



    int& day();
    int& month();
    int& year();

    static bool is_date(int day, int month, int year);
    static std::string to_string(const Date& date);
    Date();  
    Date(int day,int month,int year);
    
}
