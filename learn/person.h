//
// Created by asus on 2/7/2021.
//

#ifndef LEARN_PERSON_H
#define LEARN_PERSON_H
using namespace std;
#include <iostream>
#include "course.h"
class person {
public:
    person();
    person(int age,string name, course teacher);

private:
    int age;
    string name;
    course t;
};


#endif //LEARN_PERSON_H
