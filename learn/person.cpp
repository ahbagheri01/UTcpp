//
// Created by asus on 2/7/2021.
//

#include "person.h"
person :: person()
    : t("teacher.name",54)
{

}
person :: person(int age,string name, course teacher)
        : t(teacher.get_name(),teacher.get_price())
{

    this->age = age;
    this->name = name;


}