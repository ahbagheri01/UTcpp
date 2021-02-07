#include <iostream>
using namespace std;
class Date {
public:
    void set_date(int day,int month,int year);
    void print_date();

private:
    int day;
    int month;
    int year;
};

void Date::set_date(int day, int month, int year) {
    if(day > 30 || day < 0 || month > 12 || month < 0 || year < 1950 )
        abort();
    

}




