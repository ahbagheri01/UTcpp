//
// Created by asus on 2/7/2021.
//

#ifndef LEARN_COURSE_H
#define LEARN_COURSE_H

#include <iostream>
using namespace std;

class course {
public:
    course(string name,int price);
    string get_name(){return name;}
    int get_price(){return price;}

private:
    string name;
    int price;
};


#endif //LEARN_COURSE_H
