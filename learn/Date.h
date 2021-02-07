#include <iostream>
using namespace std;
class Date {
public:
    Date();
    Date(int day, int month, int year);
    void set_date(int day,int month,int year);
    void print_date();
    // inline functions
    int get_day(){return day;}
    int get_month(){ return month;}
    int get_year(){
        return year;
    }

private:
    int day;
    int month;
    int year;
};






