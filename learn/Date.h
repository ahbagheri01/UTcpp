#include <iostream>
using namespace std;
class Date {
public:
    Date(int day, int month, int year);
    void set_date(int day,int month,int year);
    void print_date();

private:
    int day;
    int month;
    int year;
};






